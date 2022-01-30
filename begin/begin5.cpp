#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    cout << "a=";
    cin >> a;

    double V = pow(a, 3);
    cout << "V=" << V << endl;
    double S = 6 * pow(a, 2);
    cout << "S=" << S << endl;
    return 0;
}