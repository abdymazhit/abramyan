#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int K = 1;
    while(K * K <= N) {
        K += 1;
    }

    cout << "K=" << K << endl;
    cout << "K^2=" << K * K << endl;
    cout << "(K-1)^2=" << (K - 1) * (K - 1) << endl;
    return 0;
}
