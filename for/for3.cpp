#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    int amount = 0;
    for(int i = B - 1; i > A; i--) {
        cout << i << endl;
        amount++;
    }
    cout << "amount=" << amount;
    return 0;
}
