//
//  PalindromFilter.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 16/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool IsPalindrom(const string& s) {
    int k = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s[s.size() - i - 1]) {
            k++;
        }
    }
    if(k == s.size()) {
        return true;
    }
    else {
        return false;
    }
}
vector <string> PalindromFilter(const vector <string>& words, const int& minLength) {
    vector <string> temp;
    for(auto now : words) {
        if(IsPalindrom(now) && now.size() >= minLength) {
            temp.push_back(now);
        }
    }
    return temp;
}
