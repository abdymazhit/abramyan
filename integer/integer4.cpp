#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    int segments = A / B;
    cout << "segments=" << segments << endl;
    return 0;
}
