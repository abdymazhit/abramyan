#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, A, D;
    cout << "N=", cin >> N;
    cout << "A=", cin >> A;
    cout << "D=", cin >> D;

    int array[N];
    for(int i = 0; i < N; i++) {
        array[i] = A * pow(D, i);
        cout << i << "=" << array[i] << endl;
    }

    return 0;
}