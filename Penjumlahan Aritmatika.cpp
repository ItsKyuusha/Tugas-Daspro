//judul	:	membuat program aritmatika
//			david sugiarto
//			dasar pemrograman
//			kamis,22 september 2022

#include <iostream>
using namespace std;
//kamus : 	nilai p <== integer
//			nilai q <== integer
//			kali <== integer
//			bagi <== integer
//			kurang <== integer
//			tambah <== integer
//			hasil <==integeru

//diskripsi :

main()
{
	int p;
	int q;
	int kali;
	int bagi;
	int kurang;
	int tambah;

	cout << "=======Progarm Aritmatika=======" <<endl;
	
	cout <<"masukkan nilai p : 4 " << endl;
	cout <<"masukkan nilai q : 4 " << endl;
	
	kali = p*q;
	cout <<" maka hasil perkalian p dan q adalah " << kali <<endl;
	bagi = p/q;
	cout <<" maka hasil pembagian p dan q adalah " << bagi <<endl;
	kurang = p-q;
	cout <<" maka hasil pengurangan p dan q adalah " << kurang <<endl;
	tambah = p+q;
	cout <<" maka hasil penjumlahan p dan q adalah " << tambah <<endl;
	
//jika hasil ganjil/genap
	if(tambah=8)
	{
		cout <<"hasil genap dan benar"<<endl;
	}
	else
	{
	cout <<"hasil ganjil dan salah"<<endl;
	}
}