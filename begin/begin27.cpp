#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A;
    cout << "A=";
    cin >> A;

    double x = pow(A, 2);
    cout << "A^2=" << x << endl;
    x = pow(x, 2);
    cout << "A^4=" << x << endl;
    x = pow(x, 2);
    cout << "A^8=" << x << endl;
    return 0;
}
