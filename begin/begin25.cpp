#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cout << "x=";
    cin >> x;

    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout << "y=" << y << endl;
    return 0;
}
