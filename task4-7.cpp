#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n;
    cin >> n;
    int cem = 0;
    int x = n;
    while(n != 0){
        cem = cem + pow(n % 10, 3);
        n = n / 10;
    }
    if(cem == x){
        cout << "Armstronq ededidir";
    }
    else{
        cout << "Armstronq edd deyil";
    }
    return 0;
}
