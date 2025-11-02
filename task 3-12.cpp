#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n;
    cin >>n;
    for (int i = 2; i <= n ; i++) {
        if(n % i == 0){
            cout << i << endl;
        }
    }

    return 0;
}
