#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int czyPierwsza;
int liczbyPierwsze;

int main()
{
	cout << "Do ilu chcesz wypisac liczby pierwsze: ";
	cin >> liczbyPierwsze;



	for (int i = 1; i <= liczbyPierwsze; i++)
	{
		czyPierwsza = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j < 1)
			{
				czyPierwsza = 0;

			}



		}
			
		if (czyPierwsza == 1 && i != 1)
			cout << i << endl;
	}
	
	return 0;
}
