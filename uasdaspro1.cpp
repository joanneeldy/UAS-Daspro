#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

struct
{
    int nilai;
}bykdata[1];

int main()
{
    int d, x;
    
    cout << "Banyak data = ";
    cin >> x;
    cout << endl;

    for(d = 1; d <= x; d++)
    {
        cout << "Masukan nilai ke-" << d;
        cout << " : ";
        cin >> bykdata[d].nilai;
    }

    cout << endl;
    for(d = 1; d <= x; d++)
    {
        cout << "Data ke-" << d;
        cout << " = " << bykdata[d].nilai << endl;
    }
    return 0;
}