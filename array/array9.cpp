#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n=", cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << i << "=", cin >> arr[i];
    }

    int k = 0;
    for(int i = n - 1; i >= 0; i--) {
        int num = arr[i];
        if(num % 2 == 0) {
            k++;
            cout << i << "=" << num << endl;
        }
    }
    cout << "k=" << k << endl;

    return 0;
}