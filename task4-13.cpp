#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cut_cem = 0, tek_cem = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            cut_cem += arr[i];
        else
            tek_cem += arr[i];
    }

    cout << "Cut indekslerdeki ededlerin cemi: " << cut_cem << endl;
    cout << "Tek indekslerdeki ededlerin cemi: " << tek_cem << endl;

    return 0;
}
