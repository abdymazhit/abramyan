#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    if(A < B) {
        cout << "minimum=" << A << endl;
    } else {
        cout << "minimum=" << B << endl;
    }
    return 0;
}
