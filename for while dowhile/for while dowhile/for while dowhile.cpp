#include <iostream>
#include <Windows.h>

using namespace std;

int populacja=1; int godzin=0;

int main()
{
    do 
    {
        godzin = godzin++;
        populacja = populacja * 2;

        cout << "minelo godzin: " << godzin << endl;
        cout << "liczba bakterii: " << populacja << endl;


    } while (populacja <= 1000000000);

    return 0;
}