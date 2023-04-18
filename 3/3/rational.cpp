#include "rational.h"
#include <iostream>
#include <cstdlib>

using namespace std;

rational::rational(int a1, int b1) {
    set(a1, b1);
}

void rational::set(int a1, int b1) {
    if (b1 == 0) {
        cerr << "Error: denominator cannot be 0." << endl;
        exit(1);
    }

    if (a1 > b1) {
        a1 = a1 % b1;
    }

    a = a1;
    b = b1;
    reduce();
}

void rational::show() const {
    cout << a << "/" << b;
}

rational rational::operator+(const rational& r) const {
    int new_a = a * r.b + b * r.a;
    int new_b = b * r.b;
    rational result(new_a, new_b);
    result.reduce();
    return result;
}

rational& rational::operator++() {
    a += b;
    reduce();
    return *this;
}

bool rational::operator==(const rational& r) const {
    return a == r.a && b == r.b;
}

bool rational::operator>(const rational& r) const {
    return a * r.b > r.a * b;
}

rational& rational::operator=(const rational& r) {
    a = r.a;
    b = r.b;
    return *this;
}

rational operator-(const rational& r1, const rational& r2) {
    int new_a = r1.a * r2.b - r2.a * r1.b;
    int new_b = r1.b * r2.b;
    rational result(new_a, new_b);
    result.reduce();
    return result;
}

void rational::reduce() {
    int g = gcd(a, b);
    a /= g;
    b /= g;
}

int rational::gcd(int a, int b) const {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
