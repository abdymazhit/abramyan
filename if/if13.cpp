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

    if(((B <= A ) & (A <= C)) | ((B >= A) & (A >= C))) {
        cout << "average=" << A;
    } else if (((A <= B) & (B <= C)) | ((A >= B) & (B >= C))) {
        cout << "average=" << B;
    } else {
        cout << "average=" << C;
    }
    return 0;
}
