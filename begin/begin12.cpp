#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "c=" << c << endl;
    double P = a + b + c;
    cout << "P=" << P << endl;
    return 0;
}
