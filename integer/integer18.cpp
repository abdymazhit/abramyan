#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    int thousands = (num % 10000) / 1000;
    cout << "thousands=" << thousands << endl;
    return 0;
}
