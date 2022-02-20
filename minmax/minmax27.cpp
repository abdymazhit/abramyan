#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int a = 2, a2, amount = 0, num = 0, maxAmount = 0, maxNum;
    for(int i = 1; i <= N; i++) {
        a2 = a;
        cout << "a=", cin >> a;

        if(a2 == a) {
            amount++;
        } else {
            if(amount > maxAmount) {
                maxAmount = amount;
                maxNum = num;
            }
            num = i;
            amount = 1;
        }
    }

    if(amount > maxAmount) {
        maxAmount = amount;
        maxNum = num;
    }

    cout << "maxNum=" << maxNum << endl;
    cout << "maxAmount" << maxAmount << endl;
    return 0;
}