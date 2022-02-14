#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    int result = 0;
    bool isStartedSum = false;
    for(int i = 0; i < N; i++) {
        int num;
        cout << "num=";
        cin >> num;

        if(num == 0) {
            if(!isStartedSum) {
                isStartedSum = true;
            } else {
                isStartedSum = false;
            }
        }

        if(isStartedSum) {
            result += num;
        }
    }
    cout << "result=" << result << endl;
    return 0;
}