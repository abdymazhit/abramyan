#include <iostream>

using namespace std;

int main() {
    int N, maxNum, minNum;
    cout << "N=", cin >> N;

    double min, max, sum = 0;
    for(int i = 1; i <= N; i++) {
        double num;
        cout << "num=", cin >> num;

        if(i == 1) {
            min = num;
            minNum = 0;
            max = num;
            maxNum = 0;
        }

        if(num < min) {
            if(min != max) {
                sum += min * minNum;
            }
            min = num;
            minNum = 0;
        }

        if(num > max) {
            if(max != min) {
                sum += max * maxNum;
            }
            max = num;
            maxNum = 0;
        }

        if(num == min) {
            minNum++;
        } else if(num == max) {
            maxNum++;
        } else {
            sum += num;
        }
    }
    cout << "average=" << (sum / (N - maxNum - minNum)) << endl;
    return 0;
}