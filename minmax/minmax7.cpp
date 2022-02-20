#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int min, max, minNum, maxNum;
    for(int i = 1; i <= N; i++) {
        int num;
        cout << "num=", cin >> num;

        if(i == 1) {
            min = num;
            max = num;
            minNum = i;
            maxNum = i;
        } else {
            if(num < min) {
                min = num;
                minNum = i;
            }
            if(num > max) {
                max = num;
                maxNum = i;
            }
        }
    }
    cout << "minNum=" << minNum << endl;
    cout << "maxNum=" << maxNum << endl;
    return 0;
}