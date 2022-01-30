#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "x1=";
    cin >> x1;
    cout << "y1=";
    cin >> y1;
    cout << "x2=";
    cin >> x2;
    cout << "y2=";
    cin >> y2;
    cout << "x3=";
    cin >> x3;
    cout << "y3=";
    cin >> y3;

    double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

    double P = a + b + c;
    cout << "P=" << P << endl;

    double p = P / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "S=" << S << endl;
    return 0;
}
