#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int dozens = num / 10;
    int units = num % 10;
    cout << "dozens=" << dozens << endl;
    cout << "units=" << units << endl;
    return 0;
}
