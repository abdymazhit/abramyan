#include <iostream>

using namespace std;

int main() {
    double X, A, Y, B;
    cout << "X=";
    cin >> X;
    cout << "A=";
    cin >> A;
    cout << "Y=";
    cin >> Y;
    cout << "B=";
    cin >> B;

    double chocolatePrice = A / X;
    cout << "1kg chocolate=" << chocolatePrice << endl;
    double toffeesPrice = B / Y;
    cout << "1kg toffees=" << toffeesPrice << endl;
    cout << "chocolate/toffees=" << chocolatePrice / toffeesPrice << endl;
    return 0;
}
