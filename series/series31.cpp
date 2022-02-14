#include <iostream>

using namespace std;

int main() {
    int K, N;
    cout << "K=";
    cin >> K;
    cout << "N=";
    cin >> N;

    int result = 0;
    for(int i = 1; i <= K; i++) {
        int amount = 0;
        for(int j = 1; j <= N; j++) {
            int num;
            cout << "num=";
            cin >> num;
            if(num == 2) {
                amount = 1;
            }
        }
        result += amount;
    }
    cout << "result=" << result << endl;
    return 0;
}