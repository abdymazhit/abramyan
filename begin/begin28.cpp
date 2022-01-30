#include <iostream>

using namespace std;

int main() {
    double A, x, y;
    cout << "A=";
    cin >> A;

    x = A * A;
    cout << "A^2=" << x << endl;
    y = x * A;
    cout << "A^3=" << y << endl;
    x = x * y;
    cout << "A^5=" << x << endl;
    y = x;
    x = y * y;
    cout << "A^10=" << x << endl;
    x = x * y;
    cout << "A^15=" << x << endl;
    return 0;
}
