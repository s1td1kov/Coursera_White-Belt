#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    if(a == 0) {
        if(b != 0) {
            cout << (-c) / b << endl;
        }
    }
    else {
        if(d == 0) {
            cout << -b / (2 * a) << endl;
        }
        else if(d > 0) {
            double k1 = (-b + sqrt(d)) / (2 * a);
            double k2 = (-b - sqrt(d)) / (2 * a);
            cout << k1 << " " << k2 << endl;
        }
    }
    return 0;
}
