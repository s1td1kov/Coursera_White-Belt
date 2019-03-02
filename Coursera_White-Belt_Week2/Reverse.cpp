//
//  Reverse.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 16/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

void Reverse(vector <int>& v) {
    vector <int> temp;
    for(int i = v.size() - 1; i >= 0; i--) {
        temp.push_back(v[i]);
    }
    v = temp;
}
