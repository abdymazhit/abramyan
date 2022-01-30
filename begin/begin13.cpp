#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14;

    double R1, R2;
    cout << "R1=";
    cin >> R1;
    cout << "R2=";
    cin >> R2;

    double S1 = pi * pow(R1, 2);
    cout << "S1=" << S1 << endl;
    double S2 = pi * pow(R2, 2);
    cout << "S2=" << S2 << endl;
    double S3 = abs(S1 - S2);
    cout << "S3=" << S3 << endl;
    return 0;
}
