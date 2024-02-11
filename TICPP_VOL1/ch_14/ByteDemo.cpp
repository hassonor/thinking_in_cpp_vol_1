//
// Created by Or on 2/11/2024.
//

#include "headers/ByteDemo.h"
#include <iostream>
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

void testByteDemo() {

}