#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    double K = N;
    while(K >= 3) {
        K /= 3;
    }
    cout << "power of 3=" << ((K == 1) ? "true" : "false") << endl;
    return 0;
}
