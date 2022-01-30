#include <iostream>

using namespace std;

int main() {
    double T_f;
    cout << "T_f=";
    cin >> T_f;

    double T_c = (T_f - 32) * 5 / 9;
    cout << "T_c=" << T_c << endl;
    return 0;
}
