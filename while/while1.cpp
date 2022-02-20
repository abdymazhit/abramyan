#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=", cin >> A;
    cout << "B=", cin >> B;

    int r = A - B;
    while(r >= B) {
        r -= B;
    }
    cout << "remainder=" << r << endl;
    return 0;
}
