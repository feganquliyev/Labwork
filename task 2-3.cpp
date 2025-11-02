
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a >= b and a >= c){
        cout << a;
    }
    else if (b > c){
        cout << b;
        
    }
    else{
        cout << c;
    }
    return 0;
    

}