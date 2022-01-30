#include <iostream>

using namespace std;

int main() {
    double A1, B1, C1, A2, B2, C2;
    cout << "A1=";
    cin >> A1;
    cout << "B1=";
    cin >> B1;
    cout << "C1=";
    cin >> C1;
    cout << "A2=";
    cin >> A2;
    cout << "B2=";
    cin >> B2;
    cout << "C2=";
    cin >> C2;

    double D = A1 * B2 - A2 * B1;
    double x = (C1 * B2 - C2 * B1) / D;
    cout << "x=" << x << endl;
    double y = (A1 * C2 - A2 * C1) / D;
    cout << "y=" << y << endl;
    return 0;
}
