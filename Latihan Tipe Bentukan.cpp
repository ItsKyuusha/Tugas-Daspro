//judul 	: Latihan Tipe data
//	: david sugiarto
//	: daspro lanjutan
//	: nakula 1 Udinus

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

//kamus	: 
	struct TANGGAL
	{
	string TglLahir;
	string TglMasuk;
	string TanggalJadian;
	string DieDate;
	string FirstDay;
	};
	char yt;

//diskripsi :

main()
{
	struct TANGGAL data;

	awal:
	cout <<" ==========>> latihan tipe bentukan <<========== "<< endl;
	cout <<" input tanggal lahir : ";		getline(cin,data.TglLahir);
	cout <<" input tanggal masuk : ";		getline(cin,data.TglMasuk);
	cout <<" input tanggal jadian : ";		getline(cin,data.TanggalJadian);
	cout <<" input Die Date : ";			getline(cin,data.TanggalJadian);
	cout <<" input First Day : ";			getline(cin,data.FirstDay);
	
	cout << endl;
	
	cout <<" ==========>> Hasil Output <<========== " << endl;
	cout <<" tanggal lahir : " << data.TglLahir << endl;
	cout <<" tanggal masuk : " << data.TglMasuk << endl;
	cout <<" tanggal jadian : " << data.TanggalJadian << endl;
	cout <<" Die Date : " << data.DieDate << endl;
	cout <<" First Day : " << data.FirstDay << endl;
	cout << endl;
	
	cout <<" apakah anda ingin mengulang input ? ketik (ya/tidak) ";		cin >> yt;		cin.ignore();
	cout << endl;
    	if(yt == 'Y'||yt == 'y')
    	{
    		goto awal;
    		cout << endl;
		}

	//---------------------------------

		if(yt == 'T'||yt == 't')
		{
			goto akhir;
			cout << endl;
		}
	akhir:

	cout << endl;
return 0;
}