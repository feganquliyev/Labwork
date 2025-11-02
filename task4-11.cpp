#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c = 0;

    cout << a << " " << b << " ";

    while (true) {
        c = a + b;
        if (c >= 1000) break;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
