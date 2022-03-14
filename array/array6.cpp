#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cout << "N=", cin >> N;
    cout << "A=", cin >> A;
    cout << "B=", cin >> B;

    int array[N];
    array[0] = A;
    array[1] = B;
    for(int i = 2; i < N; i++) {
        int sum = 0;
        for(int j = 0; j < i; j++) {
            sum += array[j];
        }
        array[i] = sum;
        cout << i << "=" << array[i] << endl;
    }

    return 0;
}