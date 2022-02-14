#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    if(num == 0) {
        cout << "Нулевое ";
    } else {
        if(num > 0) {
            cout << "положительное ";
        } else {
            cout << "отрицательное ";
        }

        if((num % 2) == 0) {
            cout << "чётное ";
        } else {
            cout << "нечётное ";
        }
    }
    cout << "число";
    return 0;
}
