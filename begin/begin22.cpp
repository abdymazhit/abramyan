#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    swap(A, B);
    cout << "A=" << A << endl;
    cout << "B=" << B << endl;
    return 0;
}
