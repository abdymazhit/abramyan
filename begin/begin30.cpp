#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14;

    double radians;
    cout << "radians=";
    cin >> radians;

    double degrees = (radians * 180) / pi;
    cout << "degrees=" << degrees << endl;
    return 0;
}
