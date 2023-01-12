//judul : Latihan Polyndrom
//		: David Sugiarto
//		: Daspro

#include <iostream>
using namespace std;

//kamus
	string kata;
	int i, n;
	bool polyndrom;
//diskripsi

main()
{
	cout <<" Program Mengecek Kata - Kalimat Polyndrom Atau Bukan " << endl;
	cout << endl;
	
	cout <<" Input Kata : ";
	getline(cin,kata);
	n = kata.length();
	polyndrom = true;
	
/* Looping Menggunakan For */
	for (i = 0;	i < n; i++)
	{
		if(kata[i] != kata[n-i-1])
		{
			polyndrom = false;
			break;
		}
	}
/* Looping menggunakan while	
	i = 0;
	while (i < n)
	{
		if(kata[i] != kata[n-i-1])
		{
			polyndrom = false;
			break;
		}
		i++;
	}
*/
/* Looping menggunakan Do While
	i = 0;
	do
	{
		if(kata[i] != kata[n-i-1])
		{
			polyndrom = false;
			break;
		}
		i++;	
	}
	while (i < n);
*/

	cout <<" Result : ";
	if(polyndrom == true)
	{
		cout <<" Polyndrom " << endl;
	}
	else
	{
		cout <<" Bukan Polyndrom " << endl;
	}
	
	cin.ignore();
	return 0;
	
	
}