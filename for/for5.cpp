#include <iostream>

using namespace std;

int main() {
    int price;
    cout << "price=";
    cin >> price;

    for(double i = 0.1; i <= 1; i += 0.1) {
        cout << i * price << endl;
    }
    return 0;
}
