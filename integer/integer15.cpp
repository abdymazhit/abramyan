#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int hundreds = num / 100;
    int dozens = (num / 10) % 10;
    int units = num % 10;

    int newNum = dozens * 100 + hundreds * 10 + units;
    cout << "newNum=" << newNum << endl;
    return 0;
}
