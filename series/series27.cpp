#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        double A;
        cout << "A=";
        cin >> A;

        double pow = 1;
        for(int j = 1; j <= i; j++) {
            pow *= A;
        }
        cout << "A" << i << "=" << pow << endl;
    }
    return 0;
}