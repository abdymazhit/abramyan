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

    if((A >= B) & (A >= C)) {
        if(B >= C) {
            cout << A + B;
        } else {
            cout << A + C;
        }
    } else if((B >= A) & (B >= C)) {
        if (A >= C) {
            cout << A + B;
        } else {
            cout << B + C;
        }
    }
    else {
        if (A >= B){
            cout << A + C;
        } else {
            cout << B + C;
        }
    }
    return 0;
}
