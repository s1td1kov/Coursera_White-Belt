//
//  BusStops1.cpp
//  CourseraProjects White Belt Week2
//  Created by Ruslan Sitdikov on 20/12/2018.
//  Copyright © 2018 Ruslan Sitdikov. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, vector <string>> buses;
    vector <string> busstops;
    for(int i = 0; i < n; i++) {
        string operation;
        cin >> operation;
        if(operation == "NEW_BUS") {
            string bus;
            int stop_count;
            cin >> bus >> stop_count;
            busstops.push_back(bus);
            for(int i = 0; i < stop_count; i++) {
                string stop;
                cin >> stop;
                buses[bus].push_back(stop);
            }
        }
        else if(operation == "BUSES_FOR_STOP") {
            string stop;
            cin >> stop;
            int k = 0;
            for(auto now : busstops) {
                for(auto temp : buses[now]) {
                    if(temp == stop) {
                        k++;
                    }
                }
            }
            if(k == 0) {
                cout << "No stop" << endl;;
            }
            else {
                for(auto now : busstops) {
                    for(auto temp : buses[now]) {
                        if(temp == stop) {
                            cout << now << " ";
                            break;
                        }
                    }
                }
                cout << endl;
            }
        }
        else if(operation == "STOPS_FOR_BUS") {
            string bus;
            cin >> bus;
            if(buses.count(bus) == 0 ) {
                cout << "No bus" << endl;
            }
            else
            {
                for(auto now : buses[bus]) {
                    int k = 0;
                    for(auto temp : busstops) {
                        for(auto slovo : buses[temp]) {
                            if(now == slovo) {
                                k++;
                            }
                        }
                    }
                    if(k == 1) {
                        
                        cout << "Stop " << now << ": no interchange" << endl;
                    }
                    else {
                        cout << "Stop " << now << ": ";
                        for(auto temp : busstops) {
                            for(auto tempe : buses[temp]) {
                                if(tempe == now && bus != temp) {
                                    cout << temp << " ";
                                    break;
                                }
                            }
                        }
                        cout << endl;
                    }
                }
            }
        }
        else if(operation == "ALL_BUSES") {
            if(buses.size() == 0 ) {
                cout << "No buses" << endl;
            }
            else {
                for(auto now : buses) {
                    cout << "Bus " << now.first << ": ";
                    for(auto temp : now.second) {
                        cout << temp << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
