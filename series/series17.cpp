#include <iostream>

using namespace std;

int main() {
    double B;
    cout << "B=";
    cin >> B;

    int N;
    cout << "N=";
    cin >> N;

    bool isStreamlined = true;
    for(int i = 1; i <= N; i++) {
        double num;
        cout << "num=";
        cin >> num;

        if((B <= num) && isStreamlined) {
            cout << B << endl;
            isStreamlined = false;
        }
        cout << num << endl;
    }
    return 0;
}