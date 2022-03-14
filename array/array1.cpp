#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];

    int index = 0;
    for(int i = 1; i < N * 2; i += 2) {
        A[index] = i;
        index++;
        cout << index << "=" << i << endl;
    }

    return 0;
}