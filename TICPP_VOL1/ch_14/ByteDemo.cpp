//
// Created by Or on 2/11/2024.
//

#include "headers/ByteDemo.h"
#include "headers/Byte2.h"
#include <iostream>
#include <iomanip>
#include <cassert>

ByteCh14::ByteCh14(unsigned char bb) : b(bb) {}

const ByteCh14 ByteCh14::operator+(const ByteCh14& right) const {
    return ByteCh14(b + right.b);
}

const ByteCh14 ByteCh14::operator-(const ByteCh14& right) const {
    return ByteCh14(b - right.b);
}

const ByteCh14 ByteCh14::operator*(const ByteCh14& right) const {
    return ByteCh14(b * right.b);
}

const ByteCh14 ByteCh14::operator/(const ByteCh14& right) const {
    assert(right.b != 0);
    return ByteCh14(b / right.b);
}

const ByteCh14 ByteCh14::operator%(const ByteCh14& right) const {
    assert(right.b != 0);
    return ByteCh14(b % right.b);
}

const ByteCh14 ByteCh14::operator^(const ByteCh14& right) const {
    return ByteCh14(b ^ right.b);
}

const ByteCh14 ByteCh14::operator&(const ByteCh14& right) const {
    return ByteCh14(b & right.b);
}

const ByteCh14 ByteCh14::operator|(const ByteCh14& right) const {
    return ByteCh14(b | right.b);
}

const ByteCh14 ByteCh14::operator<<(const ByteCh14& right) const {
    return ByteCh14(b << right.b);
}

const ByteCh14 ByteCh14::operator>>(const ByteCh14& right) const {
    return ByteCh14(b >> right.b);
}

ByteCh14& ByteCh14::operator=(const ByteCh14& right) {
    if (this == &right) return *this;
    b = right.b;
    return *this;
}

ByteCh14& ByteCh14::operator+=(const ByteCh14& right) {
    b += right.b;
    return *this;
}

ByteCh14& ByteCh14::operator-=(const ByteCh14& right) {
    b -= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator*=(const ByteCh14& right) {
    b *= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator/=(const ByteCh14& right) {
    assert(right.b != 0);
    b /= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator%=(const ByteCh14& right) {
    assert(right.b != 0);
    b %= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator^=(const ByteCh14& right) {
    b ^= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator&=(const ByteCh14& right) {
    b &= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator|=(const ByteCh14& right) {
    b |= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator>>=(const ByteCh14& right) {
    b >>= right.b;
    return *this;
}

ByteCh14& ByteCh14::operator<<=(const ByteCh14& right) {
    b <<= right.b;
    return *this;
}

int ByteCh14::operator==(const ByteCh14& right) const {
    return b == right.b;
}

int ByteCh14::operator!=(const ByteCh14& right) const {
    return b != right.b;
}

int ByteCh14::operator<(const ByteCh14& right) const {
    return b < right.b;
}

int ByteCh14::operator>(const ByteCh14& right) const {
    return b > right.b;
}

int ByteCh14::operator<=(const ByteCh14& right) const {
    return b <= right.b;
}

int ByteCh14::operator>=(const ByteCh14& right) const {
    return b >= right.b;
}

int ByteCh14::operator&&(const ByteCh14& right) const {
    return b && right.b;
}

int ByteCh14::operator||(const ByteCh14& right) const {
    return b || right.b;
}

void ByteCh14::print(std::ostream& os) const {
    os << "0x" << std::hex << +b << std::dec; // Using unary + to promote char to int for
}

Byte2::Byte2(unsigned char bb) : ByteCh14(bb) {}

Byte2& Byte2::operator=(const ByteCh14& right) {
    ByteCh14::operator=(right);
    return *this;
}

Byte2& Byte2::operator=(int i) {
    ByteCh14::operator=(static_cast<unsigned char>(i));
    return *this;
}


// Function to attempt an operation and print the result
void TRY2(Byte2& b1, Byte2& b2, std::ostream& os, const std::string& op) {
    Byte2 result;
    if (op == "+") result = b1 + b2;
    else if (op == "-") result = b1 - b2;
    else if (op == "*") result = b1 * b2;
    else if (op == "/") result = b1 / b2;
    else if (op == "%") result = b1 % b2;
    else if (op == "^") result = b1 ^ b2;
    else if (op == "&") result = b1 & b2;
    else if (op == "|") result = b1 | b2;
    else if (op == "<<") result = b1 << b2;
    else if (op == ">>") result = b1 >> b2;
    // Display the operation and the result
    os << "b1 = ";
    b1.print(os);
    os << ", b2 = ";
    b2.print(os);
    os << "; b1 " << op << " b2 produces ";
    result.print(os);
    os << std::endl;
}

// Function to attempt a conditional and print the result
void TRYC2(Byte2& b1, Byte2& b2, std::ostream& os, const std::string& op) {
    bool result = false;
    if (op == "<") result = b1 < b2;
    else if (op == ">") result = b1 > b2;
    else if (op == "==") result = b1 == b2;
    else if (op == "!=") result = b1 != b2;
    else if (op == "<=") result = b1 <= b2;
    else if (op == ">=") result = b1 >= b2;
    else if (op == "&&") result = (b1 && b2);
    else if (op == "||") result = (b1 || b2);
    // Display the operation and the result
    os << "b1 = ";
    b1.print(os);
    os << ", b2 = ";
    b2.print(os);
    os << "; b1 " << op << " b2 produces " << std::boolalpha << result << std::endl;
}

// Revised k function
void k(Byte2& b1, Byte2& b2) {
    std::ostream& os = std::cout; // Use std::cout directly for simplicity
    b1 = 9;
    b2 = 47;
    TRY2(b1, b2, os, "+");
    TRY2(b1, b2, os, "-");
    TRY2(b1, b2, os, "*");
    TRY2(b1, b2, os, "/");
    TRY2(b1, b2, os, "%");
    TRY2(b1, b2, os, "^");
    TRY2(b1, b2, os, "&");
    TRY2(b1, b2, os, "|");
    TRY2(b1, b2, os, "<<");
    TRY2(b1, b2, os, ">>");

    // Reset values for conditional checks
    b1 = 9;
    b2 = 47;
    TRYC2(b1, b2, os, "<");
    TRYC2(b1, b2, os, ">");
    TRYC2(b1, b2, os, "==");
    TRYC2(b1, b2, os, "!=");
    TRYC2(b1, b2, os, "<=");
    TRYC2(b1, b2, os, ">=");
    TRYC2(b1, b2, os, "&&");
    TRYC2(b1, b2, os, "||");

    // Demonstrate chained assignment
    Byte2 b3 = 92;
    b1 = b2 = b3;

    // Optionally, show the result of the chained assignment
    os << "After chained assignment, b1 and b2 are: ";
    b1.print(os);
    os << " and ";
    b2.print(os);
    os << ", respectively." << std::endl;
}


void testByteDemo() {
    std::cout << "member functions:" << std::endl;
    Byte2 b1(47), b2(9);
    k(b1, b2);
}