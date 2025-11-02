#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int n;
    cin >> n;
    int new_n = 0;
    int count = 0;
    int x = n;
    int j = n;
    while(n != 0){
        count = count + 1;
        n = n / 10;
    }
    count = count - 1;
    while(x != 0){
        new_n = new_n + (x % 10) * pow(10, count);
        x = x / 10;
        count = count - 1;
    }
    if(new_n == j){
        cout << "Polindromdur.";
    }
    else{
        cout<< "Polindrom deyil.";
    }
    return 0;
}