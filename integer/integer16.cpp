#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int hundreds = num / 100;
    int dozens = (num / 10) % 10;
    int units = num % 10;

    int newNum = hundreds * 100 + units * 10 + dozens;
    cout << "newNum=" << newNum << endl;
    return 0;
}
