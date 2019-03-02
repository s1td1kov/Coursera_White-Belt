//
//  Anagram.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 19/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        map <char, int> anagram1, anagram2;
        string word1, word2;
        cin >> word1 >> word2;
        for(int i = 0; i < word1.size(); i++) {
            anagram1[word1[i]]++;
        }
        for(int i = 0; i < word2.size(); i++) {
            anagram2[word2[i]]++;
        }
        if(anagram1 == anagram2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
