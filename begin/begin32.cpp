#include <iostream>

using namespace std;

int main() {
    double T_c;
    cout << "T_c=";
    cin >> T_c;

    double T_f = T_c * 9 / 5 + 32;
    cout << "T_f=" << T_f << endl;
    return 0;
}
