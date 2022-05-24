#include <iostream>

using namespace std;

int main()
{
    string napis = "Ala ma kota";
    string szukaj = "kot";

    size_t pozycja = napis.find(szukaj); //size_t - szuka pozycje wyrazu w string-u

    if (pozycja != string::npos)
        cout << "Znaleziona na pozycji: " << pozycja;
    else
        cout << "Nie znaleziono!";

    return 0;
}
