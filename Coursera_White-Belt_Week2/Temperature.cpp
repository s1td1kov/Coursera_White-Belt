//
//  Temperature.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 17/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> temp;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        temp.push_back(t);
    }
    int sum = 0;
    for(auto now : temp) {
        sum += now;
    }
    int sr = sum / temp.size();
    vector <int> nab;
    for(int i = 0; i < temp.size(); i++) {
        if(temp[i] > sr) {
            nab.push_back(temp[i]);
        }
    }
    cout << nab.size() << endl;
    for(int i = 0; i < temp.size(); i++) {
        if(temp[i] > sr) {
            cout << i << " ";
        }
    }
    return 0;
}
