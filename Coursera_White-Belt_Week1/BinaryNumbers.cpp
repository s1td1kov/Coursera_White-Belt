//
//  BinaryNumbers.cpp
//  CourseraProjects White Belt Week1
//  Created by Ruslan Sitdikov on 15/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a;
    while(n > 0) {
        int temp = n % 2;
        a.push_back(temp);
        n /= 2;
    }
    reverse(begin(a), end(a));
    for(auto now : a) {
        cout << now;
    }
    cout << endl;
    return 0;
}
