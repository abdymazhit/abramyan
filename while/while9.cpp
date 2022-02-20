#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int K = 0, P = 1;
    while(P <= N) {
        P *= 3;
        K += 1;
    }

    cout << "K=" << K << endl;
    cout << "3^K=" << pow(3,K) << endl;
    cout << "3^(K-1)=" << pow(3,K - 1) << endl;
    return 0;
}
