//
//  Reversed.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 16/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& input) {
    auto seq = input;
    for (int i = 0; i < seq.size() / 2; ++i) {
        auto tmp = seq[i];
        seq[i] = seq[seq.size() - 1 - i];
        seq[seq.size() - 1 - i] = tmp;
    }
    return seq;
}
