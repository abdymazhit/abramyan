#include <iostream>

using namespace std;

int main() {
    int K, N;
    cout << "K=";
    cin >> K;
    cout << "N=";
    cin >> N;

    bool value = false;
    for(int i = 0; i < N; i++) {
        int num;
        cout << "num=";
        cin >> num;

        if(!value & (num < K)) {
            value = true;
        }
    }

    if(value) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}