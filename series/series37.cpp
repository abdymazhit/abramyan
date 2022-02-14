#include <iostream>

using namespace std;

int main() {
    int K;
    cout << "K=";
    cin >> K;

    int result = 0;
    int a, a1;
    for(int i = 1; i <= K; i++) {
        cout << "a=";
        cin >> a;

        int checkUp = 1, checkDown = 1;
        while(a != 0) {
            a1 = a;
            cout << "a=";
            cin >> a;

            if((a1 >= a) && (a != 0)) {
                checkUp = 0;
            }

            if((a1 <= a) && (a != 0)) {
                checkDown = 0;
            }
        }

        if(checkUp != checkDown) {
            result++;
        }
    }
    cout << "result=" << result << endl;
    return 0;
}