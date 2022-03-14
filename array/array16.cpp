#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    for(int i = 0; i < N / 2; i++) {
        cout << i << "=" << A[i] << endl;
        cout << N - i - 1 << "=" << A[N - i - 1] << endl;
    }

    if(N % 2 == 1) {
        cout << N / 2 << "=" << A[N / 2] << endl;
    }

    return 0;
}