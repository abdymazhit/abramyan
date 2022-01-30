#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    double absA = abs(a);
    double absB = abs(b);

    cout << "|a|+|b|=" << absA + absB << endl;
    cout << "|a|-|b|=" << absA - absB << endl;
    cout << "|a|*|b|=" << absA * absB << endl;
    cout << "|a|/|b|=" << absA / absB << endl;
    return 0;
}
