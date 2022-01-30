#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cout << "x=";
    cin >> x;

    double y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
    cout << "y=" << y << endl;
    return 0;
}
