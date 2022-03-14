#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    for(int i = 1; i < N; i += 2) {
        cout << i << "=" << A[i] << endl;
    }

    for(int i = N; i >= 0; i--) {
        if(i % 2 == 0) {
            cout << i << "=" << A[i] << endl;
        }
    }

    return 0;
}