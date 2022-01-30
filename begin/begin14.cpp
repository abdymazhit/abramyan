#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14;

    double L;
    cout << "L=";
    cin >> L;

    double R = L / (2 * pi);
    cout << "R=" << R << endl;
    double S = pi * pow(R, 2);
    cout << "S=" << S << endl;
    return 0;
}
