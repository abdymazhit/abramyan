#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B;
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;

    int result = 0;
    for(int i = A; i <= B; i++) {
        result += pow(A, 2);
    }
    cout << "result=" << result << endl;
    return 0;
}
