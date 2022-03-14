#include <iostream>
#include <cmath>

using namespace std;

void Mean(double X, double Y, double &AMean, double &GMean) {
    AMean = (X + Y) / 2;
    GMean = sqrt(X * Y);
}

int main() {
    double A, B, C, D;
    cout << "A=", cin >> A;
    cout << "B=", cin >> B;
    cout << "C=", cin >> C;
    cout << "D=", cin >> D;

    double aMean, gMean;

    Mean(A, B, aMean, gMean);
    cout << "A, B: " << aMean << ", " << gMean << endl;

    Mean(A, C, aMean, gMean);
    cout << "A, C: " << aMean << ", " << gMean << endl;

    Mean(A, D, aMean, gMean);
    cout << "A, D: " << aMean << ", " << gMean << endl;

    return 0;
}
