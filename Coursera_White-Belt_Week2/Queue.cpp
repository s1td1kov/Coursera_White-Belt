//
//  Queue.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 17/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <bool> queue;
    for(int i = 0; i < n; i++)
    {
        string operation;
        cin >> operation;
        if(operation == "WORRY") {
            int k;
            cin >> k;
            queue[k] = true;
        }
        else if(operation == "QUIET") {
            int k;
            cin >> k;
            queue[k] = false;
        }
        else if(operation == "COME") {
            int k;
            cin >> k;
            queue.resize(queue.size() + k, true);
        }
        else if(operation == "WORRY_COUNT") {
            int k = 0;
            for(auto now : queue) {
                if(now == true) {
                    k++;
                }
            }
            cout << k << endl;
        }
    }
    return 0;
}
