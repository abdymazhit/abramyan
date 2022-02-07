#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int dozens = num / 10;
    int units = num % 10;
    cout << "dozens+units=" << dozens + units << endl;
    cout << "dozens*units=" << dozens * units << endl;
    return 0;
}
