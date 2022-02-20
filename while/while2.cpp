#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=", cin >> A;
    cout << "B=", cin >> B;

    int r = A - B;
    int n = 1;
    while(r >= B) {
        r -= B;
        n += 1;
    }
    cout << "number of B in A=" << n << endl;
    cout << "remainder=" << r << endl;
    return 0;
}
