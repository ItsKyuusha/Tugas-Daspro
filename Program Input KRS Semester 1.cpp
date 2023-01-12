//judul : membuat inputan KRS
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
	string sks1, sks2, sks3, sks4, sks5, sks6, sks7;
	int sks_s1;
	char yt;

//diskripsi

int main()
{
 awal:
    cout << "\t\t Kartu Rencana Studi" << endl;
    cout << "\t Program Studi Teknik Informatika" << endl;
    cout << "\t     Universitas Dian Nuswantoro" << endl;
    cout << endl;

    cout <<"Nama	: ";				getline(cin,nama);
    cout <<"NIM	: ";					getline(cin,nim);
    cout <<"Kelp : ";					getline(cin,kelp);
    
    cout << endl; 
    
    cout <<"Mata Kuliah 1	: ";		getline(cin,mk1);
	cout <<"SKS		: ";				getline(cin,sks1);
	 int sks_s1 = stoi(sks1);
	cout <<"Jadwal		: ";			getline(cin,jadwal1);
	cout <<"Ruang	: ";				getline(cin,ruang1);
	
	cout <<"Mata Kuliah 2	: ";		getline(cin,mk2);
	cout <<"SKS		: ";				cin >> sks2;
	 int sks_s1 = stoi(sks2);
	cout <<"Jadwal		: ";			getline(cin,jadwal2);
	cout <<"Ruang	: ";				getline(cin,ruang2);
	
	cout <<"Mata Kuliah 3	: ";		getline(cin,mk3);
	cout <<"SKS		: ";				cin >> sks3;
	 int sks_s3 = stoi(sks3);
	cout <<"Jadwal		: ";			getline(cin,jadwal3);
	cout <<"Ruang	: ";				getline(cin,ruang3);
	
	cout <<"Mata Kuliah 4	: ";		getline(cin,mk4);
	cout <<"SKS		: ";				cin >> sks4;
	 int sks_s4 = stoi(sks4);
	cout <<"Jadwal		: ";			getline(cin,jadwal4);
	cout <<"Ruang	: ";				getline(cin,ruang4);
	
	cout <<"Mata Kuliah 5	: ";		getline(cin,mk5);
	cout <<"SKS		: ";				cin >> sks5;
	 int sks_s5 = stoi(sks5);
	cout <<"Jadwal		: ";			getline(cin,jadwal5);
    cout <<"Ruang	: ";				getline(cin,ruang5);
    
	cout <<"Mata Kuliah 6	: ";		getline(cin,mk6);
	cout <<"SKS		: ";				cin >> sks6;
	 int sks_s6 = stoi(sks6);
	cout <<"Jadwal		: ";			getline(cin,jadwal6);
	cout <<"Ruang	: ";				getline(cin,ruang6);
    
	cout <<"Mata Kuliah 7	: ";		getline(cin,mk7);
	cout <<"SKS		: ";				cin >> sks7;
	 int sks_s7 = stoi(sks7);
	cout <<"Jadwal		: ";			getline(cin,jadwal7);
	cout <<"Ruang	:";					getline(cin,ruang7);
    
    cout << endl;
	
	cout <<" Total SKS adalah = " << totSks <<endl;
		totSks = (sks_s1 + sks_s2 + sks_s3 + sks_s4 + sks_s5 + sks_s6 + sks_s7);
	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
     
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
