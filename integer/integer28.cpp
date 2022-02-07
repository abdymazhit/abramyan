#include <iostream>

using namespace std;

int main() {
    int K, N;
    cout << "K=";
    cin >> K;
    cout << "N=";
    cin >> N;

    int day = ((K + N - 2) % 7) + 1;
    cout << "day=" << day << endl;
    return 0;
}
