#include <iostream>

using namespace std;

int main() {
    int K;
    cout << "K=";
    cin >> K;

    int result = 0;
    int a1, a = 1, a2;
    for(int i = 1; i <= K; i++) {
        cout << "a=";
        cin >> a1;

        cout << "a=";
        cin >> a;

        bool isChecked = true;
        while(a != 0) {
            a2 = a1;
            a1 = a;
            cout << "a=";
            cin >> a;

            if(!(((a2 < a1) && (a1 > a)) || ((a2 > a1) && (a1 < a))) && (a != 0)) {
                isChecked = false;
            }
        }

        if(isChecked) {
            result++;
        }
    }
    cout << "result=" << result << endl;
    return 0;
}