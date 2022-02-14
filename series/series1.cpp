#include <iostream>

using namespace std;

int main() {
    const int N = 10;

    double result = 0;
    for(int i = 0; i < N; i++) {
        int num;
        cout << "num=";
        cin >> num;
        result += num;
    }
    cout << "result=" << result << endl;
    return 0;
}