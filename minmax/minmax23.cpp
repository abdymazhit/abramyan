#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=", cin >> N;

    int max1, max2, max3;
    for(int i = 1; i <= N; i++) {
        int num;
        cout << "num=", cin >> num;

        if(i == 1) {
            max1 = num;
            max2 = num;
            max3 = num;
        }

        if((num > max3) && (num != max1) && (num != max2)) {
            if(num > max2) {
                if(num > max1) {
                    max3 = max2;
                    max2 = max1;
                    max1 = num;
                } else {
                    max3 = max2;
                    max2 = num;
                }
            } else {
                max3 = num;
            }
        }

        if(max1 == max2) {
            max2 = num;
        }

        if((max3 == max1) || (max3 == max2)) {
            max3 = num;
        }
    }
    cout << "max1=" << max1 << endl;
    cout << "max2=" << max2 << endl;
    cout << "max3=" << max3 << endl;
    return 0;
}