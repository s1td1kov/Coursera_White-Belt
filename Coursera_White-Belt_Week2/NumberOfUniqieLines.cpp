//
//  NumberOfUniqueLines.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 21/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set <string> numbers;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        numbers.insert(temp);
    }
    cout << numbers.size() << endl;
    return 0;
}
