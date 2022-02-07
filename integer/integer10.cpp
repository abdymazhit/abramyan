#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int units = num % 10;
    int dozens = (num / 10) % 10;

    cout << "units=" << units << endl;
    cout << "dozens=" << dozens << endl;
    return 0;
}
