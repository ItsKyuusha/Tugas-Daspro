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
	int tgl;
	int bln;
	int thn;
	};
	
	struct TEMPATTANGGAL {
	string kota;
	TANGGAL tgl;
	};
	
	struct WAKTU {
	int jam;
	int menit;
	int detik;
	};
	
	struct DateTime {
	WAKTU waktu;
	TANGGAL tanggal;
	};

//diskripsi :

main()
{

struct TANGGAL data1;
struct TEMPATTANGGAL data2;
struct WAKTU data3;
struct DateTime data4;

	cout <<" ==========>> latihan tipe bentukan 2 <<========== " << endl;
	cout <<" ================================================= " << endl;
	cout <<" input tanggal : ";				cin >> data1.tgl;
	cout <<" input bulan : ";				cin >> data1.bln;
	cout <<" input tahun : ";				cin >> data1.thn;
	cout <<" input kota : ";				cin >> data2.kota;
	cout <<" input jam : ";					cin >> data3.jam;
	cout <<" input menit : ";				cin >> data3.menit;
	cout <<" input detik : ";				cin >> data3.detik;
	
	cout << endl;
	
	cout <<" ==========>> Hasil Output <<========== " << endl;
	cout <<" tanggal : " << data1.tgl << endl;
	cout <<" bulan : " << data1.bln << endl;
	cout <<" tahun : " << data1.thn << endl;
	cout <<" kota : " << data2.kota << endl;
	cout <<" jam : " << data3.jam << endl;
	cout <<" menit : " << data3.menit << endl;
	cout <<" detik : " << data3.detik << endl;
	
	cout << endl;

}