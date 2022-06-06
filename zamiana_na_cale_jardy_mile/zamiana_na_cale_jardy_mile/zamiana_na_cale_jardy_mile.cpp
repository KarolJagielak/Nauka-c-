#include <iostream>

using namespace std;

float metry; // metry (zmienna globalna)

float ile_cali(float c) // <-- nagłówek funkcji // c - to parametr formalny
{ // ciało funkcji --> {} czyli to co ma funkcja zrobić
    return c * 39.37;
    //float cale = c * 39.37; // cale (zmienna lokalna) --> zsięg widoczności zmiennej

    //return cale;
}

float ile_jardow(float j); // funkcja przed main, średnik, a ciało funkcji w int main()

void ile_mil(float m) // void (pustka) - czyli procedura która nie zwraca nic do funckji głównej
{
    cout << "na mile: " << m * 0.0006213;
}
int main()
{
    cout << "Podaj ile metrow: ";
    cin >> metry; // metry - to parametr aktualny

    cout << "na cale: " << ile_cali(metry) << endl;
    cout << "na jardy: " << ile_jardow(metry) << endl;
    ile_mil(metry);

    return 0;
}

float ile_jardow(float j)
{
    return j * 1.0936;
}
