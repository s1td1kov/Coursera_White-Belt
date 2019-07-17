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

void EnsureEqual(const string& left, const string& right) {
    if (left != right) {
        string s;
        s = left + " != " + right;
        throw runtime_error(s);
    }
}

int main() {
    
}
