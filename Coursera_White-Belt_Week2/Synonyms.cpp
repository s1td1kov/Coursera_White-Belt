//
//  Synonyms.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 22/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, set<string>> synonyms;
    for (int i = 0; i < n; ++i) {
        string operation;
        cin >> operation;
        if (operation == "ADD") {
            string word1, word2;
            cin >> word1 >> word2;
            synonyms[word1].insert(word2);
            synonyms[word2].insert(word1);
        }
        else if (operation == "COUNT") {
            string word;
            cin >> word;
            cout << synonyms[word].size() << endl;
        }
        else if (operation == "CHECK") {
            string word1, word2;
            cin >> word1 >> word2;
            if (synonyms[word1].find(word2) != synonyms[word1].end()) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
