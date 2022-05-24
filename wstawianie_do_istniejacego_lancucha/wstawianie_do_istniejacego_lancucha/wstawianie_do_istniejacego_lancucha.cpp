#include <iostream>

using namespace std;

int main()
{
    string napis = "Ala ma kota";

    napis.insert(11, " Filemona"); // insert - wstawia (od znaku o indeksie 11, "to co chcemy wstawic"
    napis.insert(4, "Nowak ");

    cout << napis;

    return 0;
}
