#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int maxNum1, maxNum2, max1, max2;
    for(int i = 1; i <= N; i++) {
        int num;
        cout << "num=", cin >> num;

        if((i == 1) || (num > max1)) {
            max1 = num;
            maxNum1 = i;
        }

        if((i == 1) || (num >= max2)) {
            max2 = num;
            maxNum2 = i;
        }
    }
    cout << "maxNum1=" << maxNum1 << endl;
    cout << "maxNum2=" << maxNum2 << endl;
    return 0;
}