//
//  SetOfDictionaryMeanings.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 21/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

set<string> BuildMapValuesSet(const map<int ,string>& m ) {
    set<string> temp;
    for(auto now : m) {
        temp.insert(now.second);
    }
    return temp;
}
