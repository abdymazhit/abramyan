#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    double result = 0;
    for(int i = 1; i <= N; i++) {
        result += (double) i / N;
    }
    cout << "result=" << result << endl;
    return 0;
}
