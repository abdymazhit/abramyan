#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    double maxP;
    int maxNum;
    for(int i = 1; i <= N; i++) {
        int m, v;
        cout << "m=", cin >> m;
        cout << "v=", cin >> v;

        int P = m / v;
        if(i == 1 || P > maxP) {
            maxP = P;
            maxNum = i;
        }
    }
    cout << "maxP=" << maxP << endl;
    cout << "maxNum=" << maxNum << endl;
    return 0;
}