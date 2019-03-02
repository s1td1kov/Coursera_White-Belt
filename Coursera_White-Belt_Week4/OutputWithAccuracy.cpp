//
//  OutputWithAccuracy.cpp
//  CourseraProjects White Belt Week4
//  Created by Ruslan Sitdikov on 22/02/2019.
//  Copyright © 2019 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>

#include <fstream>

#include <string>

#include <iomanip>

using namespace std;
    
int main() {
    ifstream input("hello.txt");
    string line;
    double a;
    cout << fixed << setprecision(3);
    while (input >> a) {
        cout << a << endl;
    }
    return 0;
}
