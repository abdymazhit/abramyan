#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int amount = 0;
    for(int i = N - 1; i >= 1; i--) {
        if(A[i - 1] < A[i]) {
            cout << i << endl;
            amount++;
        }
    }
    cout << "amount=" << amount << endl;

    return 0;
}