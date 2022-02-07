#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    int unoccupiedLength = A % B;
    cout << "unoccupiedLength=" << unoccupiedLength << endl;
    return 0;
}
