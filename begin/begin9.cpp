#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    double geometricMean = sqrt(a * b);
    cout << "geometricMean=" << geometricMean << endl;
    return 0;
}