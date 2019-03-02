//
//  Names&Surnames-1.cpp
//  CourseraProjects White Belt Week3
//  Created by Ruslan Sitdikov on 21/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>

using namespace std;
string FindNameByYear(const int& year, const map<int, string>& names) {
    string temp = "";
    for (auto now : names) {
        if (year >= now.first) {
            temp = now.second;
        }
    }
    return temp;
}
class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        first_names[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        last_names[year] = last_name;
    }
    string GetFullName(int year) {
        string first_name = FindNameByYear(year, first_names);
        string last_name = FindNameByYear(year, last_names);
        if (first_name.empty() && last_name.empty()) {
            return "Incognito";
        }
        else if (first_name.empty()) {
            return last_name + " with unknown first name";
        }
        else if (last_name.empty()) {
            return first_name +  " with unknown last name";
        }
        else {
            return first_name + " " + last_name;
        }
    }
private:
    map<int, string> first_names;
    map<int, string> last_names;
};
