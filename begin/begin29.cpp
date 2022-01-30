#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14;

    double degrees;
    cout << "degrees=";
    cin >> degrees;

    double radians = (degrees * pi) / 180;
    cout << "radians=" << radians << endl;
    return 0;
}
