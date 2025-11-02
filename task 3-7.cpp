
#include <iostream>
using namespace std;
int main(){
    int n;
    int cem = 0;
    cin >> n;
    while(n != 0){
        cem = cem  + n ;
        cin >> n;
    }
    cout << cem;
    return 0;
}