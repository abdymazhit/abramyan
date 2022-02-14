#include <iostream>

using namespace std;

int main() {
    int result = 0;
    while(true) {
        int N;
        cout << "N=";
        cin >> N;

        if((N > 0) & (N % 2 == 0)) {
            result += N;
        }

        if(N == 0) {
            break;
        }
    }
    cout << "result=" << result << endl;
    return 0;
}