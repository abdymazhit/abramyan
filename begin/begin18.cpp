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

    double AC = abs(A - C);
    cout << "AC=" << AC << endl;
    double BC = abs(B - C);
    cout << "BC=" << BC << endl;
    double AC_BC = AC * BC;
    cout << "AC*BC=" << AC_BC << endl;
    return 0;
}
