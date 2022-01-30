#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    double S = a * b;
    cout << "S=" << S << endl;
    double P = 2 * (a + b);
    cout << "P=" << P << endl;
    return 0;
}