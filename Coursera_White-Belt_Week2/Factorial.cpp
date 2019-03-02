//
//  Factorial.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 16/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

#include <iostream>

using namespace std;

int fact(int n) {
    if(n <= 1) {
        return 1;
    }
    else {
        return fact(n - 1) * n;
    }
}
int main() {
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
