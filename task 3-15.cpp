#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int cem = 0;
    for(int i = 1; i<= N; i++){
        int x;
        cin >> x;
        cem = cem + x;
    }
    cout << cem;
    return 0;
}