#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;
    cout << "D=";
    cin >> D;

    if(B == C == D)  {
        cout << 1;
    } else if(A == C == D) {
        cout << 2;
    } else if(A == B == D) {
        cout << 3;
    } else {
        cout << 4;
    }
    return 0;
}
