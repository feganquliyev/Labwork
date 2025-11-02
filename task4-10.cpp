
#include <iostream>
using namespace std;
int main() {
    double a, b;
    char isare;
    cin >> a;
    cin >> isare;
    cin >> b;
    switch (isare){
        case '+':
            cout << a + b << endl;
        case '*':
            cout << a * b<< endl;
        case '-':
            cout << a -b << endl;
        case '/':
            if (b != 0){
                cout << a / b<< endl;
            
            }
            else{
                cout << "Sifira bolunme yoxdur.";
            }
    }
    

    return 0;