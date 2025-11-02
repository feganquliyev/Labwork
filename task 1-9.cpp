
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int saniye;
    cin >> saniye;
    int saat = saniye / 3600;
    saniye = saniye % 3600;
    int deqiqe = saniye / 60;
    saniye = saniye % 60;
    cout << "Saat = " << saat << " Deqiqe = " << deqiqe << " Saniye = " << saniye;
    return 0;
}