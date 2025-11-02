#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int say = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            say++;
        }
    }

    cout << say;
    return 0;
}
