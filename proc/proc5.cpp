#include <iostream>

using namespace std;

void RectPS(int x1, int y1, int x2, int y2, int &p, int &s) {
    int a = abs(x1 - x2);
    int b = abs(y1 - y2);
    p = 2 * (a + b);
    s = a * b;
}

int main() {
    int x1, y1, x2, y2, P, S;
    for(int i = 0; i < 3; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        RectPS(x1, y1, x2, y2, P, S);
        cout << "P=" << P << ", " << "S=" << S << endl;
    }
    return 0;
}