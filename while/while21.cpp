#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    bool b = false;
    while(N) {
        if((N % 10) % 2 == 1) {
            b = true;
        }
        N /= 10;
    }

    if(b) cout << "TRUE";
    else cout << "FALSE";
    return 0;
}
