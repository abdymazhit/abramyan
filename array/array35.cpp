#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int lastLocalMax = 0;
    for(int i = 0; i < N; i++) {
        if(i == 0) {
            if(A[i] > A[i + 1]) {
                lastLocalMax = A[i];
            }
        } else if(i == N - 1) {
            if(A[i] > A[i - 1]) {
                if(i < lastLocalMax) {
                    lastLocalMax = A[i];
                }
            }
        } else {
            if(A[i] > A[i + 1] && A[i] > A[i - 1]) {
                if(i < lastLocalMax) {
                    lastLocalMax = A[i];
                }
            }
        }
    }
    cout << "lastLocalMax=" << lastLocalMax << endl;

    return 0;
}