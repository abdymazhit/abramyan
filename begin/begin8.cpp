#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    double arithmeticalMean = (a + b) / 2;
    cout << "arithmeticalMean=" << arithmeticalMean << endl;
    return 0;
}