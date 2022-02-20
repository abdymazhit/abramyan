#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int maxP;
    for(int i = 1; i <= N; i++) {
        int a, b;
        cout << "a=", cin >> a;
        cout << "b=", cin >> b;

        int P = a * b;
        if(i == 1 || P > maxP) {
            maxP = P;
        }
    }
    cout << "maxP=" << maxP << endl;
    return 0;
}