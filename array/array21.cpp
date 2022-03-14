#include <iostream>

using namespace std;

int main() {
    int N, K, L;
    cout << "N=", cin >> N;
    cout << "K=", cin >> K;
    cout << "L=", cin >> L;

    int A[10];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    double sum = 0;
    for(int i = K; i <= L; i++) {
        sum += A[i];
    }
    cout << "average=" << sum / (L - K + 1) << endl;
    return 0;
}