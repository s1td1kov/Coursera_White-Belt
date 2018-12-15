//
//  Equation.cpp
//  CourseraProjects White Belt Week1
//  Created by Ruslan on 15/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if(a == 0) {
        if(b != 0) {
            cout << (-c) / b << endl;
        }
    }
    else {
        if(d == 0) {
            cout << -b / (2 * a) << endl;
        }
        else if(d > 0) {
            double k1 = (-b + sqrt(d)) / (2 * a);
            double k2 = (-b - sqrt(d)) / (2 * a);
            cout << k1 << " " << k2 << endl;
        }
    }
    return 0;
}
