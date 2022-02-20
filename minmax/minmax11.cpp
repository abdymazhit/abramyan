#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int min, max, minNum, maxNum;
    for(int i = 1; i <= N; i++) {
        int num;
        cout << "num=", cin >> num;

        if((i == 1) || (num <= min)) {
            min = num;
            minNum = i;
        }

        if((i == 1) || (num >= max)) {
            max = num;
            maxNum = i;
        }
    }
    cout << "extreme=" << (minNum > maxNum ? minNum : maxNum) << endl;
    return 0;
}