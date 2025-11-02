#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cem = 0;
    for(int i = 1; i <= n; i++){
        cem = cem + i;
    }
    cout << cem;
    return 0;
}