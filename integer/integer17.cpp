#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int hundreds = (num % 1000) / 100;
    cout << "hundreds=" << hundreds << endl;
    return 0;
}
