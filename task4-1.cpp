
#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n;
    cin >> n;
    int cem = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cem = cem + pow(i, 2);
        }
    }
    cout << cem;
    return 0;
}