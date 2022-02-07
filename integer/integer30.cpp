#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "year=";
    cin >> year;

    int century = ((year - 1) / 100) + 1;
    cout << "century=" << century << endl;
    return 0;
}
