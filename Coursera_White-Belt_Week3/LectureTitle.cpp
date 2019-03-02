//
//  LectureTitle.cpp
//  CourseraProjects White Belt Week4
//  Created by Ruslan Sitdikov on 03/02/2019.
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
struct Specialization {
    string value;
    explicit Specialization(string new_value) {
        value = new_value;
    }
};
struct Course {
    string value;
    explicit Course(string new_value) {
        value = new_value;
    }
};
struct Week {
    string value;
    explicit Week(string new_value) {
        value = new_value;
    }
};
struct LectureTitle {
    string specialization;
    string course;
    string week;
    LectureTitle(Specialization new_specialization, Course new_course, Week new_week) {
        specialization = new_specialization.value;
        course = new_course.value;
        week = new_week.value;
    }
};
