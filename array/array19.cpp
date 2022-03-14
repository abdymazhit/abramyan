#include <iostream>

using namespace std;

int main() {
    const int N = 10;

    int K;
    cout << "K=", cin >> K;

    int A[10];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int result = 0;
    for(int i = 0; i < N; i++) {
        int num = A[i];
        if(num > A[0] && num < A[N - 1]) {
            result = i;
        }
    }
    cout << "result=" << result << endl;

    return 0;
}