#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(b == 0) {
        cout << "Impossible" << endl;
    }
    else {
        cout << a / b << endl;
    }
    return 0;
}
