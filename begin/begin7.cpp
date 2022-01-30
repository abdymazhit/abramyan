#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14;

    double R;
    cout << "R=";
    cin >> R;

    double L = 2 * pi * R;
    cout << "L=" << L << endl;
    double S = pi * pow(R, 2);
    cout << "S=" << S << endl;
    return 0;
}