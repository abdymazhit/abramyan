#include <iostream>

using namespace std;

int main() {
    double X, A, Y;
    cout << "X=";
    cin >> X;
    cout << "A=";
    cin >> A;
    cout << "Y=";
    cin >> Y;

    double price = A / X;
    cout << "1kg=" << price << endl;
    cout << "Ykg=" << Y * price << endl;
    return 0;
}
