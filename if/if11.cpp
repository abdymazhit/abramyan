#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    if(A != B) {
        A = B = (A > B) ? A : B;
    } else {
        A = B = 0;
    }

    cout << "A=" << A << endl;
    cout << "B=" << B << endl;
    return 0;
}
