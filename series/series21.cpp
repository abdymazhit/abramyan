#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    bool isDecreasing = true;
    double previousNum;
    for(int i = 0; i < N; i++) {
        double num;
        cout << "num=";
        cin >> num;
        if((i != 0) & (num < previousNum)) {
            isDecreasing = false;
        }
        previousNum = num;
    }

    if(isDecreasing) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}