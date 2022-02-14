#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "x=";
    cin >> x;

    if(x < 0) {
        cout << "fx=" << 0 << endl;
    } else if((x % 2) == 0) {
        cout << "fx=" << 1 << endl;
    } else {
        cout << "fx=" << -1 << endl;
    }
    return 0;
}
