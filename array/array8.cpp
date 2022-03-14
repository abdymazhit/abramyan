#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int count = 0;
    for(int i = 0; i < N; i++) {
        if(A[i] % 2 == 1) {
            cout << A[i] << endl;
            count++;
        }
    }

    cout << "count=" << count << endl;

    return 0;
}