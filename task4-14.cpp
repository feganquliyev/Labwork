#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int ters = 0;

    while (n != 0) {
        int qaliq = n % 10;
        ters = ters * 10 + qaliq;
        n /= 10;
    }

    cout << "Tersi: " << ters << endl;

    if (ters == original)
        cout << "Eded tersi ile beraberdir (palindromdur)." << endl;
    else
        cout << "Eded tersi ile beraber deyil." << endl;

    return 0;
}
