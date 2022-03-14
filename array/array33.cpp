#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int lastLocalMaxNumber = 0;
    for(int i = 0; i < N; i++) {
        if(i == 0) {
            if(A[i] > A[i + 1]) {
                lastLocalMaxNumber = i;
            }
        } else if(i == N - 1) {
            if(A[i] > A[i - 1]) {
                lastLocalMaxNumber = i;
            }
        } else {
            if(A[i] > A[i + 1] && A[i] > A[i - 1]) {
                lastLocalMaxNumber = i;
            }
        }
    }
    cout << "lastLocalMaxNumber=" << lastLocalMaxNumber << endl;

    return 0;
}