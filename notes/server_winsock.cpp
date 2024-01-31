#include "server_winsock.h"
#include <iostream>
#include <WinSock2.h>
#include <Windows.h>

#pragma comment(lib, "ws2_32.lib")
#define PORT 8080

void testWinSocketDemo() {
    // Initialize Winsock
    WSAData wsaData{};
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "WSAStartup failed.\n";
        return;
    }

    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (s == INVALID_SOCKET) {
        std::cerr << "Socket creation failed.\n";
        WSACleanup();
        return;
    }

    struct sockaddr_in sa = {0};
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_family = AF_INET;
    sa.sin_port = htons(PORT); // Translate the port to big-endian

    if (bind(s, (struct sockaddr*) &sa, sizeof(sa)) == SOCKET_ERROR) {
        std::cerr << "Bind failed.\n";
        closesocket(s);
        WSACleanup();
        return;
    }

    // Listen for incoming requests
    if (listen(s, SOMAXCONN) == SOCKET_ERROR) {
        std::cerr << "Listen failed.\n";
        closesocket(s);
        WSACleanup();
        return;
    }

    std::cout << "Listening on port " << PORT << std::endl;

    while (true) {
        std::cout << "Waiting for clients to connect " << std::endl;
        SOCKET clientsocket = accept(s, NULL, NULL);
        if (clientsocket == INVALID_SOCKET) {
            std::cerr << "Accept failed.\n";
            continue; // Handle new connections even if accept fails
        }

        std::cout << "Client connected!" << std::endl;

        char clientmsg[1024] = {0};
        int bytesReceived = recv(clientsocket, clientmsg, 1024, 0);
        if (bytesReceived <= 0) {
            std::cerr << "Receive failed or connection closed.\n";
            closesocket(clientsocket);
            continue;
        }

        clientmsg[bytesReceived] = '\0'; // Ensure null termination
        std::cout << "Client sent: " << clientmsg << std::endl;

        std::string servmsg;
        servmsg = "HTTP/1.1 200 OK\r\n";
        servmsg += "Content-Type: text/html\r\n";
        servmsg += "Connection: close\r\n"; // Close connection after response
        servmsg += "\r\n"; // Separate headers from body
        servmsg += "<!DOCTYPE html>\n<HTML><title>Hi from server</title>";
        servmsg += "<body><h1>Hi from server in defensive programming</h1></body></HTML>";

        send(clientsocket, servmsg.c_str(), servmsg.length(), 0);

        // Close the client socket
        closesocket(clientsocket);
    }

    // Close the server socket and clean up
    closesocket(s);
    WSACleanup();
}
