#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 1000; i++) {
        int x = i;
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }

        if (rev == i) {
            cout << i << endl;
        }
    }
    return 0;
}
