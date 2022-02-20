#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int max, maxNum;
    for(int i = 1; i <= N; i++) {
        int num;
        cout << "num=", cin >> num;

        if((i == 1) || (num >= max)) {
            max = num;
            maxNum = i;
        }
    }
    cout << "amount=" << N - maxNum << endl;
    return 0;
}