#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14;

    double S;
    cout << "S=";
    cin >> S;

    double R = sqrt(S / pi);
    cout << "R=" << R << endl;
    double D = 2 * R;
    cout << "D=" << D << endl;
    double L = pi * D;
    cout << "L=" << L << endl;
    return 0;
}
