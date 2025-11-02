
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    if (a > b){
        cout << a;
    }
    else if (b > a){
        cout << b;
    }
    else{
        cout << "Numbers are equal.";
    }
    
    return 0;
    

}
