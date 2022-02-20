#include <iostream>

using namespace std;

int main() {
    int N, K;
    cout << "N=", cin >> N;
    cout << "K=", cin >> K;

    int r = N;
    int q = 0;
    while(r >= K) {
        r -= K;
        q += 1;
    }
    cout << "quotient=" << q << endl;
    cout << "remainder=" << r << endl;
    return 0;
}
