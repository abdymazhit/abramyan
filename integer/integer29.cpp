#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;

    int squares = (A / C) * (B / C);
    int unoccupiedArea = A * B - squares * pow(C, 2);

    cout << "squares=" << squares << endl;
    cout << "unoccupiedArea=" << unoccupiedArea << endl;
    return 0;
}
