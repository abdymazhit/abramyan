#include <iostream>

using namespace std;

int main() {
    int price;
    cout << "price=";
    cin >> price;

    for(int i = 1; i <= 10; i++) {
        cout << i * price << endl;
    }
    return 0;
}
