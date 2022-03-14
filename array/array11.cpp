#include <iostream>

using namespace std;

int main() {
    int N, K;
    cout << "N=", cin >> N;
    cout << "K=", cin >> K;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        int num = A[i];
        if(num % K == 0) {
            cout << i << "=" << num << endl;
        }
    }

    return 0;
}