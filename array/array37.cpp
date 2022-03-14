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
    for(int i = 2; i < N; i++) {
        if((A[i - 2] < A[i - 1]) && A[i - 1] >= A[i]) {
            amount++;
        }
    }

    if(A[N - 2] < A[N - 1]) {
        amount++;
    }

    cout << "amount=" << amount << endl;

    return 0;
}