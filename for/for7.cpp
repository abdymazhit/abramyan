#include <iostream>

using namespace std;

int main() {
    int A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    int result = 0;
    for(int i = A; i <= B; i++) {
        result += i;
    }
    cout << "result=" << result << endl;
    return 0;
}
