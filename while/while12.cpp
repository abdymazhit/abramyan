#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int K = 0, sum = 0;
    while(sum + K + 1 <= N) {
        K++;
        sum += K;
    }

    cout << "K=" << K << endl;
    cout << "sum=" << sum << endl;
    return 0;
}
