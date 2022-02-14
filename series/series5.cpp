#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    double result = 0;
    for(int i = 0; i < N; i++) {
        double num;
        cout << "num=";
        cin >> num;

        int n = (int) num;
        cout << n << endl;
        result += n;
    }
    cout << "result=" << result << endl;
    return 0;
}