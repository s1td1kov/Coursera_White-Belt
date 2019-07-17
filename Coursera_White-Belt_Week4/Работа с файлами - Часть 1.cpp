//
//  main.cpp
//  Coursera-White-Belt
//
//  Created by Руслан on 17/07/2019.
//  Copyright © 2019 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <exception>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;
    while (getline(input, line)) {
        output << line << endl;
    }
    return 0;
}
