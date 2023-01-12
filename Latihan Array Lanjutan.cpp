//judul : array lanjutan
//		: david sugiarto
//		: daspro
//		: d2g

//----------------------- soal ----------------------------

//no. 1
/*
Perhatikan sebuah data array yang terdiri usia
17	18	17	34	46	22	17	18	35	34	17	18
atau anda mempunyai koleksi data sendiri
- Tuangkan	dalam	array
- Cobalah	membuat	media	input	usia	kedalam	array
- Cari rata-ratanya
- Urutkan dalam	urutan	Ascending atau	Desc
- Carilah berapa banyak data terbesarnya
- Carilah berapa banyak data terkecilnya
*/
#include <iostream>
#include <math.h>
using namespace std;

//kamus
	int data[13];
	int x, y;
	int gelas;
//diskrpsi

main()
{
	cout <<" =-=-=-=-=->> program input usia <<-=-=-=-=-= " << endl;		// menggunakan array
	cout <<" =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- " << endl;
	cout << endl;
	
	cout <<" daftar usia : {17 18 17 34 46 22 17 18 35 34 17 18}" << endl;
	cout <<" masukkan daftar ini kedalam inputan ! " << endl;
	x = 1;
	while (x<13)
	{
		cout << "masukkan data ke " << x << " = ";
		cin >> data[x];
		x++;
	}
	
	x = 1;
	while (x<13)
	{
		cout << " usia orang ke " << x << " = " << data[x] << endl;
		x++;
	}
	
	x=1;
	while (x<13)
	{
		y=x+1;
		while (y<13)
		{
			if (data[x]>data[y])
			{
				gelas = data[x];
				data[x]=data[y];
				data[y]=gelas;
			}
			y++;
		}
		x++;
	}
	 
	x = 1;
	cout << endl;
	cout <<" jika diurutkan menjadi : ";
	while (x<13)
	{
		cout << data[x] << " ";
		x++;
	}
}