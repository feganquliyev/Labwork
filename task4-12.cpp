#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cem = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            cem += i;
    }

    if (cem == n)
        cout << "Mukemmel ededdir." << endl;
    else
        cout << "Mukemmel eded deyil." << endl;

    return 0;
}
