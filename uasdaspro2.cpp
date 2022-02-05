#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Masukan bilangan bulat positif: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Tidak ada faktorial dari bilangan bulat negatif.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Faktorial dari " << n << " adalah = " << factorial;    
    }

    getch();
    return 0;
}