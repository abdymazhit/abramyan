#include <iostream>

using namespace std;

void SortInc3(double &A, double &B, double &C) {
    double firstNum, secondNum, thirdNum;

    if(A >= B && A >= C) {
        thirdNum = A;
        if(B < C) {
            firstNum = B;
            secondNum = C;
        } else {
            firstNum = C;
            secondNum = B;
        }
    } else if((A >= B && A < C) || (A >= C && A < B)) {
        secondNum = A;
        if(B < C) {
            firstNum = B;
            thirdNum = C;
        } else {
            firstNum = C;
            thirdNum = B;
        }
    } else {
        firstNum = A;
        if(B < C) {
            secondNum = B;
            thirdNum = C;
        } else {
            secondNum = C;
            thirdNum = B;
        }
    }

    A = firstNum;
    B = secondNum;
    C = thirdNum;
}

int main() {
    double A, B, C;
    for (int i = 1; i < 3; i++) {
        cout << "A" << i << "=", cin >> A;
        cout << "B" << i << "=", cin >> B;
        cout << "C" << i << "=", cin >> C;
        SortInc3 (A, B, C);
        cout << A << " " << B << " " << C << endl;
    }
    return 0;
}