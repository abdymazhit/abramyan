#include <iostream>

using namespace std;

int main() {
    double V, U, T1, T2;
    cout << "V=";
    cin >> V;
    cout << "U=";
    cin >> U;
    cout << "T1=";
    cin >> T1;
    cout << "T2=";
    cin >> T2;

    double S = V * T1 + (V - U) * T2;
    cout << "S=" << S << endl;
    return 0;
}
