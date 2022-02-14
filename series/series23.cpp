#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;

    bool serrated = true;
    float r1, r, r2;
    int result = 0;
    for (int i = 0; i < N; i++) {
        cout << "r=";
        cin >> r;

        if(!((r2 < r1) && (r1 > r)) && !((r2 > r1) && (r1 < r)) && (i > 2) && serrated) {
            result = i - 1;
            serrated = false;
        }

        r2 = r1;
        r1 = r;
    }
    cout << "result=" << result << endl;
    return 0;
}