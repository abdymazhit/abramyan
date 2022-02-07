#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int hundreds = num / 100;
    int dozens = (num / 10) % 10;
    int units = num % 10;

    cout << "hundreds+dozens+units=" << hundreds + dozens + units << endl;
    cout << "hundreds*dozens*units=" << hundreds * dozens * units << endl;
    return 0;
}
