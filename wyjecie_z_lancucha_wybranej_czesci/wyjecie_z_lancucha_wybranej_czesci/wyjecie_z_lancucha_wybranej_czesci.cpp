#include <iostream>

using namespace std;

int main()
{
    string napis = "Ala ma kota";
    string nowynapis = napis.substr(4, 7); //substr - wyjecie (od 4 znaku, wyjmij 7 liter) 
    cout << nowynapis;

    return 0;
}
