//
//  ListOfStudents.cpp
//  CourseraProjects White Belt Week4
//  Created by Ruslan Sitdikov on 22/02/2019
//  Copyright © 2019 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>

#include <fstream>

#include <iomanip>

#include <map>

#include <vector>

using namespace std;

struct Student {
    string Name;
    string Surname;
    int Day;
    int Month;
    int Year;
};

int main() {
    int n;
    cin >> n;
    vector<Student> students;
    string name;
    string surname;
    int day;
    int month;
    int year;
    for (int i = 0; i < n; ++i) {
        cin >> name >> surname >> day >> month >> year;
        students.push_back({name, surname, day, month, year});
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string operation;
        int x;
        cin >> operation >> x;
        if (students.size() < x  || x <= 0) {
            cout << "bad request" << endl;
        }
        else if (operation == "name") {
                cout << students[x - 1].Name << " " << students[x - 1].Surname << endl;
        }
        else if (operation == "date") {
            cout << students[x - 1].Day << "." << students[x - 1].Month << "." << students[x - 1].Year << endl;
        }
        else {
            cout << "bad request" << endl;
        }
    }
    return 0;
}
