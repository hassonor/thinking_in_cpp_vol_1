//
// Created by Or on 1/25/2024.
//

#include "server_winsock.h"
#include <iostream>
#include <WinSock2.h>
#include <Windows.h>

#pragma comment(lib, "ws2_32.lib")
#define PORT 8080

void testWinSocketDemo(){
    // init
    WSAData wsaData{};
    int ret = WSAStartup(MAKEWORD(2,2), &wsaData);
    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    struct sockaddr_in sa = { 0 };
    sa.sin_addr.s_addr = INADDR_ANY;
    sa.sin_family = AF_INET;
    sa.sin_port = htons(PORT); // translate the port to big-endian

    bind(s,(struct sockaddr*)&sa, sizeof(sa));

    // listening for incoming requests
    listen(s, SOMAXCONN);

    std::cout << "listening on port " << PORT << std::endl;

    std::cout << "waiting for clients to connect " << std::endl;
    SOCKET clientsocket = accept(s, NULL, NULL);

    std::cout << "client connected!" << std::endl;

    char clientmsg[1024] = { 0 };
    recv(clientsocket, clientmsg, 1024, 0);

    std:: cout << "client sent:" << clientmsg << std::endl;

    send(clientsocket, "Hello from server!",18,0);

    closesocket(clientsocket);

    WSACleanup();
}