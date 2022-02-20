#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int min, amount;
    for(int i = 1; i <= N; i++) {
        int num;
        cout << "num=", cin >> num;

        if((i == 1) || (num < min)) {
            min = num;
            amount = 0;
        }

        if(num == min) amount++;
    }
    cout << "amount=" << amount << endl;
    return 0;
}