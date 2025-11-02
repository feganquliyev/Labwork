
#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int lamp = 1;
    int a;
    cin >> a;
    for (int i = 2; i <= pow(a, 0.5); ++i ){
        if (a % i == 0){
            lamp = 0;
            break;
        }
    }
    if (lamp == 1){
        cout << "Sadedir";
    }
    else
        cout << "Sade deyil";
    return 0;
}