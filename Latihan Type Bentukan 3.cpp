//judul : Latihan Tipe data
//		: david sugiarto
//		: daspro lanjutan
//		: nakula 1 Udinus

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

//kamus	:
	struct TANGGAL {
	int tabTLahir;
	};
	
	
//diskripsi

main()
{
	
	TANGGAL data[5];
	int x = 1;
	while (x <= 5)
	{
		cout <<" input tanggal lahir : ";		cin >> data[x].tabTLahir;
		x++;
	}
	
	x = 1;
	while (x <= 5)
	{
		cout <<" tanggal lahir orang ke [" << x << "]" << " : " << data[x].tabTLahir << endl;
		x++;
	}
}