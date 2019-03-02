//
//  MonthlyDeals.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 17/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> monthes = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector <vector <string>> deals(31);
    int n;
    cin >> n;
    int k = 0;
    for(int i = 0; i < n; i++) {
        string operation;
        cin >> operation;
        if(operation == "ADD") {
            int temp1;
            string temp2;
            cin >> temp1 >> temp2;
            deals[temp1 - 1].push_back(temp2);
        }
        else if(operation == "NEXT") {
            const int old_month_length = monthes[k];
            k = (k + 1) % 12;
            const int new_month_length = monthes[k];
            if(new_month_length < old_month_length) {
                vector <string>& temp = deals[new_month_length - 1];
                for(int day = new_month_length; day < old_month_length; day++) {
                    temp.insert(end(temp), begin(deals[day]), end(deals[day]));
                }
            }
            deals.resize(new_month_length);
        }
        else if(operation == "DUMP") {
            int temp;
            cin >> temp;
            --temp;
            cout << deals[temp].size() << " ";
            for(auto now : deals[temp]) {
                cout << now << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
