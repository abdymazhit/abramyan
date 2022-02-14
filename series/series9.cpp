#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    double amount = 0;
    for(int i = 0; i < N; i++) {
        int num;
        cout << "num=";
        cin >> num;

        if(num % 2 != 0) {
            cout << num << endl;
            amount++;
        }
    }
    cout << "amount=" << amount << endl;
    return 0;
}