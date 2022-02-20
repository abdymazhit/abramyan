#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int K = 0;
    while(N >= 2) {
        N /= 2;
        K += 1;
    }
    cout << "K=" << K << endl;
    return 0;
}
