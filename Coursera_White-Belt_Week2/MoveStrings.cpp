//
//  MoveStrings.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 16/12/2018.
//  Copyright © 2018 Ruslan. All rights reserved.
//

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (auto w : source) {
        destination.push_back(w);
    }
    source.clear();
}
