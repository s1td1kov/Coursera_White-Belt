//
//  SortingIntegersABS.cpp
//  CourseraProjects White Belt Week3
//  Created by Ruslan Sitdikov on 21/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        temp.push_back(k);
    }
    sort(begin(temp), end(temp), [](const int& a, const int& b) {
        return abs(a) < abs(b);
    });
    for(auto now : temp) {
        cout << now << " ";
    }
    return 0;
}
