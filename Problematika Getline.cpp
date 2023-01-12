//judul : membuat inputan KRS dan KHS
//		: David Sugiarto
//		: Dasar Pemrograman
//		: 10 Oktober 2022

#include <iostream>
#include <conio.h>
//#include <stdlib.h>
using namespace std;

// kamus :
	string nim,nama,kelp;
	string mk1,mk2,mk3,mk4,mk5,mk6,mk7;
    string jadwal1,jadwal2,jadwal3,jadwal4,jadwal5,jadwal6,jadwal7;
    string ruang1,ruang2,ruang3,ruang4,ruang5,ruang6,ruang7;
	string Sks1,Sks2,Sks3,Sks4,Sks5,Sks6,Sks7;
	string matkul1,matkul2,matkul3,matkul4,matkul5,matkul6,matkul7;
	int sks1,sks2,sks3,sks4,sks5,sks6,sks7;
	int nilai1,nilai2,nilai3,nilai4,nilai5,nilai6,nilai7;
	int totNilai,totSks,ratarata;
	char yt;

//diskripsi

int main()
{
 awal:
	//Inputan KRS
    cout << "\t\t Kartu Rencana Studi" << endl;
    cout << "\t Program Studi Teknik Informatika" << endl;
    cout << "\t     Universitas Dian Nuswantoro" << endl;
    cout << endl;
    cout <<"Nama	: ";				getline(cin,nama);
    cout <<"NIM	: ";					getline(cin,nim);
    cout <<"Kelp    : ";				getline(cin,kelp);

    cout << endl;

    cout <<"Mata Kuliah 1	: ";		getline(cin,mk1);
	cout <<"SKS		: ";				getline(cin,Sks1);
	cout <<"Jadwal		: ";			getline(cin,jadwal1);
	cout <<"Ruang	        : ";		getline(cin,ruang1);
	cout << endl;

	cout <<"Mata Kuliah 2	: ";		getline(cin,mk2);
	cout <<"SKS		: ";				getline(cin,Sks2);
	cout <<"Jadwal		: ";			getline(cin,jadwal2);
	cout <<"Ruang	        : ";		getline(cin,ruang2);
    cout << endl;

	cout <<"Mata Kuliah 3	: ";		getline(cin,mk3);
	cout <<"SKS		: ";				getline(cin,Sks3);
	cout <<"Jadwal		: ";			getline(cin,jadwal3);
	cout <<"Ruang	        : ";		getline(cin,ruang3);
    cout << endl;

	cout <<"Mata Kuliah 4	: ";		getline(cin,mk4);
	cout <<"SKS		: ";				getline(cin,Sks4);
	cout <<"Jadwal		: ";			getline(cin,jadwal4);
	cout <<"Ruang	        : ";		getline(cin,ruang4);
    cout << endl;

	cout <<"Mata Kuliah 5	: ";		getline(cin,mk5);
	cout <<"SKS		: ";				getline(cin,Sks5);
	cout <<"Jadwal		: ";			getline(cin,jadwal5);
    cout <<"Ruang	        : ";		getline(cin,ruang5);
    cout << endl;

	cout <<"Mata Kuliah 6	: ";		getline(cin,mk6);
	cout <<"SKS		: ";				getline(cin,Sks6);
	cout <<"Jadwal		: ";			getline(cin,jadwal6);
	cout <<"Ruang	        : ";		getline(cin,ruang6);
    cout << endl;

	cout <<"Mata Kuliah 7	: ";		getline(cin,mk7);
	cout <<"SKS		: ";				getline(cin,Sks7);
	cout <<"Jadwal		: ";			getline(cin,jadwal7);
	cout <<"Ruang	        :";			getline(cin,ruang7);
    cout << endl;
    cout << endl;

	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";

    cout << endl;
    //inputan KHS

	cout << " 					           KARTU HASIL STUDI " << endl;
	cout << " 					   PROGRAM STUDI TEKNIK INFORMATIKA " << endl;
	cout << "					      UNIVERSITAS DIAN NUSWANTORO " << endl;

	cout << endl;
	cout << endl;

	cout <<" NAMA	: " ;
    getline(cin,nama);
    cout <<" NIM	: " ;
    getline(cin,nim);

    cout << endl;
    cout << endl;
    cout << endl;

		cout <<" NAMA MATA KULIAH					  SKS				        	  NILAI " << endl;
		cout << endl;

		getline(cin,matkul1);					 cin >> sks1;					 	cin >> nilai1;
		getline(cin,matkul2);					 cin >> sks2;					 	cin >> nilai2;
		getline(cin,matkul3);					 cin >> sks3;					 	cin >> nilai3;
		cout << matkul4;						 cin >> sks4;					 	cin >> nilai4;
		cout << matkul5;						 cin >> sks5;					 	cin >> nilai5;
		cout << matkul6;						 cin >> sks6;					 	cin >> nilai6;
		cout << matkul7;						 cin >> sks7;					 	cin >> nilai7;
		cout << endl;

		totSks = (sks1 + sks2 + sks3 + sks4 + sks5 + sks6 + sks7);
		cout <<" Total SKS adalah = " << totSks <<endl;

		totNilai = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7);
		cout <<" Total Nilainya adalah = " << totNilai << endl;

		ratarata = (totNilai/7);
		cout <<" Rata Rata Nilainya adalah = " << ratarata << endl;
		cout << endl;

   		cout << " apakah anda ingin mengulang input?ketik (y/t) ";		cin >> yt;
    	cout << endl;

    	if(yt=='Y'||yt=='y')
    	{
    		goto awal;
		}

	//---------------------------------

		if(yt=='T'||yt=='t')
		{
			goto akhir;
		}
	akhir:

	cout << endl;

    cout <<"!=-=-=-=-=-=-=-=-=->> Terima Kasih <<-=-=-=-=-=-=-=-=-=!" << endl;

    cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";

return 0;
}
