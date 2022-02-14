#include <iostream>

using namespace std;

int main() {
    int K, N;
    cout << "K=";
    cin >> K;
    cout << "N=";
    cin >> N;

    for(int i = 1; i <= K; i++) {
        int number = 0;
        for(int j = 1; j <= N; j++) {
            int num;
            cout << "num=";
            cin >> num;
            if(num == 2) {
                number = j;
            }
        }
        cout << "number=" << number << endl;
    }
    return 0;
}