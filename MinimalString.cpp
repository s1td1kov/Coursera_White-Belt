//
//  MinimalString.cpp
//  CourseraProjects White Belt
//  Created by Ruslan on 15/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    
    if (a <= b && a <= c) {
        cout << a << endl;
    } else if (b <= a && b <= c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }
    return 0;
}
