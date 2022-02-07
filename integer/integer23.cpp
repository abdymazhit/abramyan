#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    int elapsedMinutes = N % (60 * 60) / 60;
    cout << "elapsedMinutes=" << elapsedMinutes << endl;
    return 0;
}
