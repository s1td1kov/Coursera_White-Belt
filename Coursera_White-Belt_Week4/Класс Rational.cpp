//
//  main.cpp
//  Coursera-White-Belt
//
//  Created by Руслан on 05/07/2019.
//  Copyright © 2019 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <vector>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <set>

using namespace std;

int gcd(const int& a, const int& b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

class Rational {
public:
    Rational() {
        p = 0;
        q = 1;
    }
    
    Rational(int numerator, int denominator) {
        p = numerator / gcd(numerator, denominator);
        q = denominator / gcd(numerator, denominator);
        if (p > 0 && q < 0) {
            p = -p;
            q = -q;
        } else if (p < 0 && q < 0) {
            p = -p;
            q = -q;
        }
    }
    
    int Numerator() const {
        return p;
    }
    
    int Denominator() const {
        return q;
    }
    
public:
    int p;
    int q;
};

Rational operator+(const Rational& r1, const Rational& r2) {
    return Rational(r1.Numerator() * r2.Denominator() + r1.Denominator() * r2.Numerator(), r1.Denominator() * r2.Denominator());
}

bool operator==(const Rational& r1, const Rational& r2) {
    return r1.Numerator() == r2.Numerator() && r1.Denominator() == r2.Denominator();
}

Rational operator-(const Rational& r1, const Rational& r2) {
    return Rational(r1.Numerator() * r2.Denominator() - r2.Numerator() * r1.Denominator(), r1.Denominator() * r2.Denominator());
}

Rational operator*(const Rational& r1, const Rational& r2) {
    return Rational(r1.Numerator() * r2.Numerator(), r1.Denominator() * r2.Denominator());
}

Rational operator/(const Rational& r1, const Rational& r2) {
    return Rational(r1.Numerator() * r2.Denominator(), r2.Numerator() * r1.Denominator());
}

istream& operator>>(istream& stream, Rational& r) {
    int p, q;
    if (stream >> p && stream.ignore(1) && stream >> q) {
        r = {p, q};
    }
    return stream;
}

ostream& operator<<(ostream& stream, const Rational& r) {
    stream << r.Numerator() << '/' << r.Denominator();
    return stream;
}

bool operator>(const Rational& r1, const Rational& r2) {
    return (r1.Numerator() / (double)r1.Denominator()) > (r2.Numerator() / (double)r2.Denominator());
}

bool operator<(const Rational& r1, const Rational& r2) {
    return (r1.Numerator() / (double)r1.Denominator()) < (r2.Numerator() / (double)r2.Denominator());
}

int main() {
    
}
