#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int isNextWillBePositive = false;
    for(int i = 0; i < N; i++) {
        int num = A[i];
        if(i == 0) {
            if(num >= 0) {
                isNextWillBePositive = false;
            } else {
                isNextWillBePositive = true;
            }
        } else {
            if(num >= 0 && isNextWillBePositive) {
                isNextWillBePositive = false;
            } else if(num < 0 && !isNextWillBePositive) {
                isNextWillBePositive = true;
            } else {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;

    return 0;
}