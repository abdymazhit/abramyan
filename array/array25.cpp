#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    if(N < 2) {
        cout << "N needs be more or equals 2" << endl;
        return 0;
    }

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    double q = A[1] / A[0];
    for (int i = 1; i < N; i++) {
        if(q != A[i] / A[i-1]) {
            q = 0;
        }
    }
    cout << q << endl;

    return 0;
}