#include <iostream>

using namespace std;

int main() {
    double A, B, C, x, y;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;

    x = C;
    C = A;
    y = B;
    B = x;
    A = y;
    cout << "A=" << A << endl;
    cout << "B=" << B << endl;
    cout << "C=" << C << endl;
    return 0;
}
