//
//  main.cpp
//  Coursera-White-Belt
//
//  Created by Руслан on 19/07/2019.
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
        if (denominator == 0) {
            throw invalid_argument("invalid_argument");
        } else {
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
    }
    
    int Numerator() const {
        return p;
    }
    
    int Denominator() const {
        return q;
    }
    
private:
    int p;
    int q;
};


Rational operator/(const Rational& r1, const Rational& r2) {
    if (r2.Numerator() == 0) {
        throw domain_error("domain_error");
    } else {
        return Rational(r1.Numerator() * r2.Denominator(), r2.Numerator() * r1.Denominator());
    }
}

int main() {
    
}
