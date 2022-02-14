#include <iostream>

using namespace std;

int main() {
    int A, B, x;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    if(A > B) {
        x = A;
        A = B;
        B = x;
    }

    cout << "A=" << A << endl;
    cout << "B=" << B << endl;
    return 0;
}
