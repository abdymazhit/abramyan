#include <iostream>

using namespace std;

int main() {
    int K;
    cout << "K=";
    cin >> K;

    int result = 0;
    while(true) {
        int N;
        cout << "N=";
        cin >> N;

        if((result == 0) & (N > K)) {
            result = N;
        }

        if(N == 0) {
            break;
        }
    }
    cout << "result=" << result << endl;
    return 0;
}