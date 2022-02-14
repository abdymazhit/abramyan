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

    int positives = 0;
    if(A > 0) {
        positives++;
    }
    if(B > 0) {
        positives++;
    }
    if(C > 0) {
        positives++;
    }
    cout << "positives=" << positives << endl;

    int negatives = 0;
    if(A < 0) {
        negatives++;
    }
    if(B < 0) {
        negatives++;
    }
    if(C < 0) {
        negatives++;
    }
    cout << "negatives=" << negatives << endl;
    return 0;
}
