#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    if(num > 0) {
        num++;
    } else if(num < 0) {
        num -= 2;
    } else {
        num = 10;
    }
    cout << "num=" << num << endl;
    return 0;
}
