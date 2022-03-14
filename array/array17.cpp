#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    for(int i = 0 ; i <= N / 2 + 1; i += 2) {
        cout << i << "=" << A[i] << endl;
        if(i < N / 2) {
            cout << i + 1 << "="  << A[i + 1] << endl;
        }
        if(N - i - 1 > N / 2) {
            cout << N - i - 1 << "=" << A[N - i - 1] << endl;
        }
        if(N - i - 2 > N / 2) {
            cout << N - i - 2 << "=" << A[N - i - 2] << endl;
        }
    }

    return 0;
}