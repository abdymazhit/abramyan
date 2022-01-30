#include <iostream>

using namespace std;

int main() {
    double V1, V2, S, T;
    cout << "V1=";
    cin >> V1;
    cout << "V2=";
    cin >> V2;
    cout << "S=";
    cin >> S;
    cout << "T=";
    cin >> T;

    double distance = abs(S - (V1 * T + V2 * T));
    cout << "distance=" << distance << endl;
    return 0;
}
