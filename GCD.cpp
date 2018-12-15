//
//  GCD.cpp
//  CourseraProjects White Belt Week1
//  Created by Ruslan on 15/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    else if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
