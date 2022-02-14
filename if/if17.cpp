#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;

    if(((A <= B) & (B <= C)) | ((A >= B) & (B >= C))) {
        A = A * 2;
        B = B * 2;
        C = C * 2;
    } else {
        A = A * (-1);
        B = B * (-1);
        C = C * (-1);
    }
    cout << "A=" << A << endl;
    cout << "B=" << B << endl;
    cout << "C=" << C << endl;
    return 0;
}
