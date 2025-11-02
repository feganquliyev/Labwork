
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int a;
    cin >> a;
    if (a <= 2){
        cout << "Qisdir";
    }
    else if (a <= 5){
        cout << "Yazdir";
    }
    else if (a <= 8){
        cout << "Yaydir";
    }
    else if(a <= 11){
        cout << "Payizdir";
    }
    else if (a == 12){
        cout << "Qisdir";
    }
    else{
        cout << "Duzgun daxil edin";
    }
    return 0;
}