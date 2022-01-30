#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    double powA = pow(a, 2);
    double powB = pow(b, 2);

    cout << "a^2+b^2=" << powA + powB << endl;
    cout << "a^2-b^2=" << powA - powB << endl;
    cout << "a^2*b^2=" << powA * powB << endl;
    cout << "a^2/b^2=" << powA / powB << endl;
    return 0;
}
