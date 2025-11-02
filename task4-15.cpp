#include <iostream>
using namespace std;

int main() {
    int n;
    int max_eded = 0;

    cout << "Ededleri daxil edin : " << endl;

    while (true) {
        cin >> n;
        if (n == 0) break;

        if (n > max_eded)
            max_eded = n;
    }

    cout << "En boyuk eded: " << max_eded << endl;

    return 0;
}
