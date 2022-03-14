#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        if(A[i] % 2 == 0) {
            cout << A[i] << endl;
        }
    }

    for(int i = N - 1; i >= 0; i--) {
        if(A[i] % 2 == 1) {
            cout << A[i] << endl;
        }
    }

    return 0;
}