//
//  BusStops3.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 21/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    int l = 1;
    map<set<string>, int> stops;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        set<string> tempstops;
        for (int i = 0; i < k; i++) {
            string stop;
            cin >> stop;
            tempstops.insert(stop);
        }
        if (stops.count(tempstops) == 0) {
            stops[tempstops] = l;
            cout << "New bus " << l << endl;
            l++;
        }
        else {
            cout << "Already exists for " << stops[tempstops] << endl;
        }
    }
    return 0;
}
