#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, x2;
    cout << "x1=";
    cin >> x1;
    cout << "x2=";
    cin >> x2;

    double distance = abs(x2 - x1);
    cout << "|x2-x1|=" << distance << endl;
    return 0;
}
