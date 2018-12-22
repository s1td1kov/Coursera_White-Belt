//
//  Division.cpp
//  CourseraProjects White Belt Week1
//  Created by Ruslan Sitdikov on 15/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(b == 0) {
        cout << "Impossible" << endl;
    }
    else {
        cout << a / b << endl;
    }
    return 0;
}
