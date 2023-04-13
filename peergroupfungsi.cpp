#include <iostream>
using namespace std;
int faktorial(int input);
int main()
{
    int angka;
    cout << "Masukkan Angka : ";
    cin >> angka;
 
    cout << angka << "! = " << faktorial(angka);
    cout << endl;

    return 0;
}

int faktorial(int input)
{
    if (input > 1)
    {
        return input * faktorial(input - 1);
    }
    else
    {
        return 1;
    }
}