#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int max = 0;
    int x;
    cin >> x;
    int min = x;
    int cem = 0;
    cem = cem + x;
    for(int i = 2; i <= n; i++){
        cin >> x;
        cem = cem + x;
        if(x > max){
            max = x;
        }
        if(x < min){
            min = x;
        }
    }
    cout << cem / n << " " << min << " " << max;
    return 0;
}
