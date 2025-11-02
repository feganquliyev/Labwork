#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int cem = 0;
    for(int i = 100; i < 1000; i++){
        cem = (i % 10) + (i / 100) + (i / 10) % 10;
        if (cem == 10){
            cout << i << endl;
        }
    }
    return 0;
}
