//
//  SortedStrings(Class).cpp
//  CourseraProjects White Belt Week3
//  Created by Ruslan Sitdikov on 25/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

class SortedStrings {
public:
    void AddString(const string& s) {
        map.push_back(s);
    }
    vector<string> GetSortedStrings() {
        sort(begin(map), end(map));
        return map;
    }
private:
    vector<string> map;
};
