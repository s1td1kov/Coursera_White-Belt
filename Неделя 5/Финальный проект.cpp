#include <iostream>
#include <exception>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>

using namespace std;

class Date {
    
public:
    int GetYear() const {
        return year;
    }
    int GetMonth() const {
        return month;
    }
    int GetDay() const {
        return day;
    }
    
    Date(const int& new_year, const int& new_month, const int& new_day) {
        day = new_day;
        month = new_month;
        year = new_year;
        
        if (month < 1 || month > 12) {
            stringstream s;
            s << "Month value is invalid: " << new_month;
            throw runtime_error(s.str());
        }
        
        if (day < 1 || day > 31) {
            stringstream s;
            s << "Day value is invalid: " << new_day;
            throw runtime_error(s.str());
        }
    }
    
    Date() {}
    
private:
    int day;
    int month;
    int year;
    
};

bool operator < (const Date& date1, const Date& date2) {
    if (date1.GetYear() == date2.GetYear()) {
        if (date1.GetMonth() == date2.GetMonth()) {
            return date1.GetDay() < date2.GetDay();
        } else {
            return date1.GetMonth() < date2.GetMonth();
        }
    } else {
        return date1.GetYear() < date2.GetYear();
    }
}

Date ParseDate(const std::string& date) {
        stringstream date_stream(date);
        bool flag = true;
        
        int year;
        flag = flag && (date_stream >> year);
        flag = flag && (date_stream.peek() == '-');
        date_stream.ignore(1);
        
        int month;
        flag = flag && (date_stream >> month);
        flag = flag && (date_stream.peek() == '-');
        date_stream.ignore(1);
        
        int day;
        flag = flag && (date_stream >> day);
        flag = flag && date_stream.eof();
        
        if (!flag) {
            stringstream s;
            s << "Wrong date format: " << date;
            throw runtime_error(s.str());
        }
        return Date(year, month, day);
}

class Database {
    
public:
    
    void AddEvent(const Date& date, const string& event) {
        if (!event.empty()) {
            date_events[date].insert(event);
        }
    }
    
    bool DeleteEvent(const Date& date, const string& event) {
        bool k = false;
        if (date_events[date].count(event)) {
            k = true;
            date_events[date].erase(event);
        }
        return k;
    }
    
    int DeleteDate(const Date& date) {
        int size = date_events[date].size();
        date_events.erase(date);
        return size;
    }
    
    set<string> Find(const Date& date) const {
        set<string> result;
        if (date_events.count(date) > 0) {
            result = date_events.at(date);
        }
        return result;
    }
    
    void Print() const {
        for (auto now : date_events) {
            for (auto temp : now.second)
                cout << setw(4) << setfill('0') << now.first.GetYear() << '-' << setw(2) << setfill('0') << now.first.GetMonth() << '-' << setw(2) << setfill('0') << now.first.GetDay() << " " << temp << endl;
        }
    }
    


private:
    map<Date, set<string>> date_events;
    
};

int main() {
    Database db;
    
    string command;
    while (getline(cin, command)) {
        try {
            stringstream stream(command);
            string operation;
            stream >> operation;
            if (operation == "Add") {
                string date, event;
                stream >> date >> event;
                Date data;
                data = ParseDate(date);
                db.AddEvent(data, event);
            } else if (operation == "Del") {
                string date, event;
                stream >> date >> event;
                Date data;
                data = ParseDate(date);
                if (event.empty()) {
                    int size = db.DeleteDate(data);
                    cout << "Deleted " << size << " events" << endl;
                } else {
                    bool k = db.DeleteEvent(data, event);
                    string s = (k ? "Deleted successfully" : "Event not found");
                    cout << s << endl;
                }
            } else if (operation == "Find") {
                string date;
                stream >> date;
                Date data;
                data = ParseDate(date);
                set<string> history = db.Find(data);
                for (auto now : history) {
                    cout << now << endl;
                }
            } else if (operation == "Print") {
                db.Print();
            } else if (!operation.empty()){
                cout << "Unknown command: " << operation << endl;
            }
        } catch(exception& ex) {
            cout << ex.what() << endl;
        }
    }
}
