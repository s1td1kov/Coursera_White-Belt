//
//  ReversibleString.cpp
//  CourseraProjects White Belt Week3
//  Created by Ruslan Sitdikov on 25/01/2019.
//  Copyright © 2019 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;
class ReversibleString {
public:
    ReversibleString() {}
    ReversibleString(const string& data) {
        s = data;
    }
    void Reverse() {
        string data = "";
        for (int i = 0; i < s.size(); ++i) {
            data += s[s.size() - i - 1];
        }
        s = data;
    }
    string ToString() const{
        return s;
    }
private:
    string s;
};
