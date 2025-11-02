
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int r;
    cin >> r;
    int sahe = 4 * M_PI * pow(r, 2);
    int cevre = 2 * M_PI * r;
    cout << sahe << endl << cevre;

    return 0;