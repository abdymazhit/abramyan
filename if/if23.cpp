#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cout << "x1=";
    cin >> x1;
    cout << "y1=";
    cin >> y1;
    cout << "x2=";
    cin >> x2;
    cout << "y2=";
    cin >> y2;
    cout << "x3=";
    cin >> x3;
    cout << "y3=";
    cin >> y3;

    if(x2 == x3) {
        cout << "x4=" << x1 << endl;
    } else if(x3 == x1) {
        cout << "x4=" << x2 << endl;
    } else {
        cout << "x4=" << x3 << endl;
    }

    if(y2 == y3) {
        cout << "y4=" << y1 << endl;
    } else if(y3 == y1) {
        cout << "y4=" << y2 << endl;
    } else {
        cout << "y4=" << y3 << endl;
    }
    return 0;
}
