#include <iostream>

using namespace std;

int main()
{
    string napis = "Ala ma kota";
    napis.replace(4, 2, "nie ma"); //replace - zastap (od ktorego znaku zaczac zastepowanie, ile znakow zastapic, czym je zastapic)
    cout << napis;

    return 0;
}
