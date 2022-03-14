#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n=", cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << i << "=", cin >> arr[i];
    }

    int arr2[n];
    int number = 0;
    for(int i = 0; i < n; i++) {
        int num = arr[i];

        bool isOneElement = true;
        bool isTwoElement = false;
        for(int j = 0; j < n; j++) {
            if(j != i) {
                int num1 = arr[j];
                if(num1 == num) {
                    if(isOneElement) {
                        isOneElement = false;
                    } else {
                        isTwoElement = true;
                    }
                }
            }
        }

        if(isTwoElement) {
            arr2[number] = num;
            number++;
        }
    }

    int newArr[number];
    for(int i = 0; i < number; i++) {
        newArr[i] = arr2[i];
    }

    for(int i = 0; i < number; i++) {
        cout << i << "=" << newArr[i] << endl;
    }
    return 0;
}