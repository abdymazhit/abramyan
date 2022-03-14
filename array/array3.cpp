#include <iostream>

using namespace std;

int main() {
    int N, A, D;
    cout << "N=", cin >> N;
    cout << "A[0]=", cin >> A;
    cout << "D=", cin >> D;

    int array[N];
    for(int i = 0; i < N; i++) {
        array[i] = A + D * i;
    }

    for(int i = 0; i < N; i++) {
        cout << "A[" << i << "]=" << array[i] << endl;
    }

    return 0;
}