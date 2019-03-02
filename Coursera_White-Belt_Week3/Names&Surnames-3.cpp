//
//  Names&Surnames-3.cpp
//  CourseraProjects White Belt Week3
//  Created by Ruslan Sitdikov on 25/01/2019.
//  Copyright © 2019 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <vector>

using namespace std;

string FindNameByYear(int year, const map<int, string>& names) {
    string temp = "";
    for (auto now : names) {
        if (now.first <= year) {
            temp = now.second;
        }
    }
    return temp;
}

vector<string> FindFullNameHistoryByYear(int year, const map<int, string>& names) {
    vector<string> temp;
    for (auto now : names) {
        if (now.first <= year && (temp.empty() || now.second != temp.back()))
            temp.push_back(now.second);
    }
    return temp;
}

string BuildName(vector<string>& names) {
    reverse(names.begin(), names.end());
    if (names.empty()) {
        return "";
    }
    else if (names.size() == 1) {
        return names[0];
    }
    else {
        string temp_name = names[0];
        for (int i = 1; i < names.size(); ++i) {
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
    else if(first_name.empty()) {
        return last_name + " with unknown first name";
    }
    else if(last_name.empty()) {
        return first_name + " with unknown last name";
    }
    else {
        return first_name + " " + last_name;
    }
}

class Person {
public:
    Person(const string& first_name, const string& last_name,
           const int& year) {
        first_names[year] = first_name;
        last_names[year] = last_name;
        birthday = year;
    }
    void ChangeFirstName(int year, const string& first_name) {
        first_names[year] = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        last_names[year] = last_name;
    }
    string GetFullName(int year) const {
        if (year < birthday) {
            return "No person";
        }
        else {
            const string first_name = FindNameByYear(year, first_names);
        const string last_name = FindNameByYear(year, last_names);
        string temp = BuildFullName(first_name, last_name);
        return temp;
        }
    }
    string GetFullNameWithHistory(int year) const {
        if (year < birthday) {
            return "No person";
        }
        else {
        vector<string> first_name = FindFullNameHistoryByYear(year, first_names);
        vector<string> last_name = FindFullNameHistoryByYear(year, last_names);
        string temp_firstname = BuildName(first_name);
        string temp_lastname = BuildName(last_name);
        string temp = BuildFullName(temp_firstname, temp_lastname);
        return temp;
        }
    }
private:
    map<int, string> first_names;
    map<int, string> last_names;
    int birthday;
};
