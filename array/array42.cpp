#include <iostream>

using namespace std;

int main() {
    int R, N;
    cout << "R=", cin >> R;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int min = abs(A[0] + A[1] - R);
    int K = 1;

    for (int i = 2; i < N; i++) {
        if (abs(A[i - 1] + A[i] - R) < min) {
            min = abs(A[i - 1] + A[i] - R);
            K = i;
        }
    }

    cout << "result=" << A[K - 1] << ", " << A[K] << endl;

    return 0;
}