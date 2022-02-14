#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    int result = 0;
    int previousNum = 0;
    for(int i = 0; i < N; i++) {
        int num;
        cout << "num=";
        cin >> num;
        if(num < previousNum) {
            cout << num << endl;
            result++;
        }
        previousNum = num;
    }
    cout << "result=" << result << endl;
    return 0;
}