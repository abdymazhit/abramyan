#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "x1=";
    cin >> x1;
    cout << "y1=";
    cin >> y1;
    cout << "x2=";
    cin >> x2;
    cout << "y2=";
    cin >> y2;

    double A = abs(x1 - x2);
    double B = abs(y1 - y2);
    double P = (A + B) * 2;
    double S = A * B;

    cout << "P=" << P << endl;
    cout << "S=" << S << endl;
    return 0;
}
