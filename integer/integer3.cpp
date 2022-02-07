#include <iostream>

using namespace std;

int main() {
    int bytes;
    cout << "bytes=";
    cin >> bytes;

    int kilobytes = bytes / 1024;
    cout << "kilobytes=" << kilobytes << endl;
    return 0;
}
