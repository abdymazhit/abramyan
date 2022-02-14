#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "num=";
    cin >> num;

    if(num > 0) {
        num++;
    }
    cout << "num=" << num << endl;
    return 0;
}
