#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int min, max;
    for(int i = 1; i <= N; i++) {
        int num;
        cout << "num=", cin >> num;

        if(i == 1) {
            min = num;
            max = num;
        } else {
            if(num < min) min = num;
            if(num > max) max = num;
        }
    }
    cout << "min=" << min << endl;
    cout << "max=" << max << endl;
    return 0;
}