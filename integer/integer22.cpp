#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    int elapsedSeconds = N % (60 * 60);
    cout << "elapsedSeconds=" << elapsedSeconds << endl;
    return 0;
}
