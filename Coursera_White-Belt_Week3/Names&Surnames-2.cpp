//
//  Names&Surnames-2.cpp
//  CourseraProjects White Belt Week3
//  Created by Ruslan Sitdikov on 15/01/2019.
//  Copyright © 2019 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

string FindNameByYear(map<int, string>& names, int year) {
    string temp = "";
    for (auto now : names) {
        if (now.first <= year) {
            temp = now.second;
        }
    }
    return temp;
}
vector<string> FindFullNamesHistory(const map<int, string>& names, int year) {
    vector<string> temp;
    for(auto now : names) {
        if(now.first <= year && (temp.empty() || temp.back() != now.second)) {
            temp.push_back(now.second);
        }
    }
    return temp;
}
string BuildName(vector<string> names) {
    reverse(names.begin(), names.end());
    if (names.empty()) {
        return "";
    }
    else if (names.size() == 1) {
        return names[0];
    }
    else {
        string temp_name = names[0];
        for (int i = 1; i < names.size(); i++) {
            if (i == 1) {
                temp_name += " (";
                temp_name += names[i];
            }
            else {
                temp_name += ", ";
                temp_name += names[i];
            }
        }
        temp_name += ")";
        return temp_name;
    }
}
string BuildFullName(const string& first_name, const string& last_name) {
    if (first_name.empty() && last_name.empty()) {
        return "Incognito";
    }
    else if (first_name.empty()) {
        return last_name + " with unknown first name";
    }
    else if (last_name.empty()) {
        return first_name + " with unknown last name";
    }
    else {
        return first_name + " " + last_name;
    }
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
        const string first_name = FindNameByYear(first_names, year);
        const string last_name = FindNameByYear(last_names, year);
        if (first_name.empty() && last_name.empty()) {
            return "Incognito";
        }
        else if (first_name.empty()) {
            return last_name + " with unknown first name";
        }
        else if (last_name.empty()) {
            return first_name + " with unknown last name";
        }
        else {
            return first_name + " " + last_name;
        }
    }
    string GetFullNameWithHistory(int year) {
        const string first_name = BuildName(FindFullNamesHistory(first_names, year));
        const string last_name = BuildName(FindFullNamesHistory(last_names, year));
        string temp = BuildFullName(first_name, last_name);
        return temp;
    }
private:
    map<int, string> first_names;
    map<int, string> last_names;
};
