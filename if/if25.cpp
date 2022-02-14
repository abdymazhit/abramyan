#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "x=";
    cin >> x;

    if((x < -2) | (x > 2)) {
        cout << "fx=" << 2 * x << endl;
    } else {
        cout << "fx=" << -3 * x << endl;
    }
    return 0;
}
