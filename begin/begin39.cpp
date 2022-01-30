#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;

    double D = pow(B, 2) - 4 * A * C;
    double x1 = (-B + sqrt(D)) / (2 * A);
    double x2 = (-B - sqrt(D)) / (2 * A);

    if(x1 < x2) {
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    } else {
        cout << "x2=" << x2 << endl;
        cout << "x1=" << x1 << endl;
    }
    return 0;
}
