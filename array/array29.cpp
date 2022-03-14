#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) {
        cout << i << "=", cin >> A[i];
    }

    int max;
    int index;
    for(int i = 1; i < N; i += 2) {
        int num = A[i];
        if(i == 1) {
            max = num;
            index = i;
        } else {
            if(num > max) {
                max = num;
                index = i;
            }
        }
    }
    cout << index << "=" << max << endl;

    return 0;
}