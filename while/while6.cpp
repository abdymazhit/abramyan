#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    double result = 1;
    while(N >= 2) {
        result *= N;
        N -= 2;
    }
    cout << "result=" << result << endl;
    return 0;
}
