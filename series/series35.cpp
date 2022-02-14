#include <iostream>

using namespace std;

int main() {
    int K;
    cout << "K=";
    cin >> K;

    int result = 0;
    for(int i = 1; i <= K; i++) {
        int amount = 0;
        while(true) {
            int num;
            cout << "num=";
            cin >> num;
            amount++;

            if(num == 0) {
                break;
            }
        }
        cout << "amount=" << amount << endl;
        result += amount;
    }
    cout << "result=" << result << endl;
    return 0;
}