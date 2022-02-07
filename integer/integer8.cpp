#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int dozens = num / 10;
    int units = num % 10;

    int newNum = units * 10 + dozens;
    cout << "new num=" << newNum << endl;
    return 0;
}
