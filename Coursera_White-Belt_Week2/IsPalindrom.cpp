//
//  IsPalindrom.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 16/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

bool IsPalindrom(string& str) {
    int k = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == str[str.size() - i - 1]) {
            k++;
        }
    }
    if(k == str.size()) {
        return true;
    }
    return false;
}
