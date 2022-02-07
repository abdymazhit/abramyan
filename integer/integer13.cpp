#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int hundreds = num / 100;
    int dozens = (num / 10) % 10;
    int units = num % 10;

    int newNum = dozens * 100 + units * 10 + hundreds;
    cout << "newNum=" << newNum << endl;
    return 0;
}
