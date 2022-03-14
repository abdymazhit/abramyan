#include <iostream>
#include <cmath>

using namespace std;

double Arctg1(double &x, double &e) {
    double num = x;
    double sum = x;
    double n = 3;
    while(abs(num) > e) {
        num *= (-1) * x * x / n * (n - 2);
        n += 2;
        sum += num;
    }
    return sum;
}

int main() {
    double x, e;
    cout << "x=", cin >> x;
    cout << "arctgx=" << atan(x) << endl;

    for (int i = 1; i < 7; ++i) {
        cout << "e=", cin >> e;
        cout << "Arctg1=" << Arctg1(x, e) << endl;
    }
    return 0;
}