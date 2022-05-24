#include <iostream>

using namespace std;

int main()
{
    string napis = "Ala ma kota";
    napis.erase(3, 3); //erase - kasuje (pierwsza liczba od ktorego znaku, druga ile ma skasowac)

    cout << napis;

    return 0;
}
