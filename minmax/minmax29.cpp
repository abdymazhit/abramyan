#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int num, minNum, amount = 0, maxAmount = 0;
    for(int i = 1; i <= N; i++) {
        cout << "num=", cin >> num;

        if((i == 1) || (num < minNum)) {
            minNum = num;
            amount = 0;
            maxAmount = 0;
        }

        if(num == minNum) {
            amount++;
        } else {
            if(amount > maxAmount) {
                maxAmount = amount;
            }
            amount = 0;
        }
    }

    if((amount > maxAmount) && (num == minNum)) {
        maxAmount = amount;
    }

    cout << "maxAmount=" << maxAmount << endl;
    return 0;
}