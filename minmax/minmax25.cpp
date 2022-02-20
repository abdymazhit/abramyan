#include <iostream>

using namespace std;

int main() {
    int N, num;
    cout << "N=", cin >> N;

    int num1, num2, minMultiply;
    for(int i = 1; i <= N; i++) {
        num2 = num1;
        cout << "num=", cin >> num1;

        if((i == 2) || (num1 * num2 < minMultiply)) {
            minMultiply = num1 * num2;
            num = i;
        }
    }
    cout << "minNum1=" << num - 1 << endl;
    cout << "minNum2=" << num << endl;
    return 0;
}