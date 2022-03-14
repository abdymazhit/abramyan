#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];

    int x = 2;
    for(int i = 0; i < N; i++) {
        A[i] = x;
        cout << i << "=" << A[i] << endl;
        x *= 2;
    }

    return 0;
}