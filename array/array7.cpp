#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n=", cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << i << "=", cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << i << "=" << arr[i] << endl;
    }

    return 0;
}