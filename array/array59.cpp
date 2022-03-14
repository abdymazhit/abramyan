#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int sum = 0;
    int B[N];
    for(int k = 0; k < N; k++) {
        sum += A[k];
        int average = sum / (k + 1);
        B[k] = average;
    }

    for(int i = 0; i < N; i++) {
        cout << "new " << i << "=" << B[i] << endl;
    }

    return 0;
}