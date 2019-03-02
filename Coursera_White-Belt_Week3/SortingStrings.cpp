//
//  SortingStrings.cpp
//  CourseraProjects White Belt Week3
//  Created by Ruslan Sitdikov on 21/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;
bool cmp(string word1, string word2) {
    for(int i = 0; i < word1.size(); i++) {
        int temp = tolower(word1[i]);
        word1[i] = char(temp);
    }
    for(int i = 0; i < word2.size(); i++) {
        int temp = tolower(word2[i]);
        word2[i] = char(temp);
    }
    return word1 < word2;
}
int main() {
    int n;
    cin >> n;
    vector<string> words;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        words.push_back(temp);
    }
    sort(begin(words), end(words), cmp);
    for(auto now : words) {
        cout << now << " ";
    }
    return 0;
}
