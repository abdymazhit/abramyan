#include <iostream>

using namespace std;

int main() {
    int B, C;
    cout << "B=", cin >> B;
    cout << "C=", cin >> C;

    int max, maxNum;
    for(int i = 1; i <= 10; i++) {
        int num;
        cout << "num=", cin >> num;

        if(num > max && num > B && num < C) {
            max = num;
            maxNum = i;
        }
    }
    cout << "max=" << max << endl;
    cout << "maxNum=" << maxNum << endl;
    return 0;
}