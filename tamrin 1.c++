
#include <iostream>
#include <iomanip>
#include<conio.h>
using namespace std;

int main() {
    const int size = 10;

    cout << "جدول ضرب 10x10:n";
    cout << "-------------------n";

    cout << setw(4) << " ";
    for (int j = 1; j <= size; j++) {
        cout << setw(4) << j;
    }
    cout << "n";

    for (int i = 1; i <= size; i++) {
        cout << setw(4) << i; 

        for (int j = 1; j <= size; j++) {
            cout << setw(4) << i * j;
        }
        cout << "n"; 
    }

    return 0;
}
