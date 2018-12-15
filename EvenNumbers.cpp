//
//  EvenNumbers.cpp
//  CourseraProjects White Belt Week1
//  Created by Ruslan on 15/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            cout << i << ' ';
        }
    }
    return 0;
}
