#include <iostream>

using namespace std;

int main() {
    int price;
    cout << "price=";
    cin >> price;

    for(double i = 1.2; i <= 2; i += 0.2) {
        cout << i * price << endl;
    }
    return 0;
}
