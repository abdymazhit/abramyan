#include <iostream>

using namespace std;

int main() {
    int K;
    cout << "K=";
    cin >> K;

    int day = ((K + 4) % 7) + 1;
    cout << "day=" << day << endl;
    return 0;
}
