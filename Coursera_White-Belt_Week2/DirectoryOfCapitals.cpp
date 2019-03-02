//
//  DirectoryOfCapitals.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 19/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, string> countries;
    for(int i = 0; i < n; i++) {
        string operation;
        cin >> operation;
        if(operation == "CHANGE_CAPITAL") {
            string country, new_capital;
            cin >> country >> new_capital;
            if(countries.count(country) == 0) {
                countries[country] = new_capital;
                cout << "Introduce new country " << country << " with capital " << new_capital << endl;
            }
            else {
                string old_capital = countries[country];
                if(old_capital == new_capital) {
                    cout << "Country " << country << " hasn't changed its capital" << endl;
                }
                else {
                    countries[country] = new_capital;
                    cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
                }
            }
        }
        else if(operation == "RENAME") {
            string old_country_name, new_country_name;
            cin >> old_country_name >> new_country_name;
            if(countries.count(old_country_name) == 0 || countries.count(new_country_name)) {
                cout << "Incorrect rename, skip" << endl;
            }
            else {
                string temp_capital = countries[old_country_name];
                countries.erase(old_country_name);
                countries[new_country_name] = temp_capital;
                cout << "Country " << old_country_name << " with capital " << temp_capital << " has been renamed to " <<
                new_country_name << endl;
            }
        }
        else if(operation == "ABOUT") {
            string country;
            cin >> country;
            if(countries.count(country) == 0) {
                cout << "Country " << country << " doesn't exist" << endl;
            }
            else {
                cout << "Country " << country << " has capital " << countries[country] << endl;
            }
        }
        else if(operation == "DUMP") {
            if(countries.size() == 0) {
                cout << "There are no countries in the world" << endl;
            }
            else {
                for(auto now : countries) {
                    cout << now.first << "/" << now.second << endl;
                }
            }
        }
    }
    return 0;
}
