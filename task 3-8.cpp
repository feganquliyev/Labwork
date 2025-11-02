#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int n;
    cin >> n;
    int new_n = 0;
    int count = 0;
    int x = n;
    while(n != 0){
        count = count + 1;
        n = n / 10;
    }
    count = count - 1;
    while(x != 0){
        new_n = new_n + (n % 10) * pow(10, count);
        x = x / 10;
        count = count - 1;
    }
    cout << new_n;
    return 0;
}