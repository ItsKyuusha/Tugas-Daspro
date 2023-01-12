//judul : membuat inputan KHS
//		: David Sugiarto
//		: Dasar Pemrograman
//		: 10 Oktober 2022

#include <iostream>
using namespace std;

//kamus
	string nama,nim,ws,kelp,waldos;
	string matkul1,matkul2,matkul3,matkul4,matkul5,matkul6,matkul7;
	int sks1,sks2,sks3,sks4,sks5,sks6,sks7;
	int nilai1,nilai2,nilai3,nilai4,nilai5,nilai6,nilai7;
	int totNilai,totSks,ratarata;
	char yt;
	
//diskripsi

main()
{
 awal:
	matkul1 = "Kalkulus 1";
	matkul2 = "Pengantar Teknik Informatika";
	matkul3 = "Dasar Pemrograman";
	matkul4 = "Matematika Diskrit";
	matkul5 = "Pemrograman Berbasis Web";
	matkul6 = "Dasar Dasar Komputasi";
	matkul7 = "Organisasi Dan Arsitektur Komputer";
	
	cout << "\t\t Kartu Hasil Studi" << endl;
    cout << "\t Program Studi Teknik Informatika" << endl;
    cout << "\t     Universitas Dian Nuswantoro" << endl;
    cout << endl;
	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	
	cout <<" NAMA			: ";				getline(cin,nama);
    cout <<" NIM			: ";				getline(cin,nim);
    cout <<" Kelp 			: ";				getline(cin,kelp);
    cout <<" Dosen Wali		: ";				getline(cin,waldos);
	                       	
	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	
		cout <<" NAMA MATA KULIAH			SKS	  NILAI " << endl;
		cout << endl;
	
		cout << matkul1;				cin >> sks1;	cin >> nilai1;
		cout << matkul2;				cin >> sks2;	cin >> nilai2;
		cout << matkul3;				cin >> sks3;	cin >> nilai3;
		cout << matkul4;				cin >> sks4;	cin >> nilai4;
		cout << matkul5;				cin >> sks5;	cin >> nilai5;
		cout << matkul6;				cin >> sks6;	cin >> nilai6;
		cout << matkul7;				cin >> sks7;	cin >> nilai7;
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
		
		cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
		cout <<"=-=-=-=-=-=-=-=-=-=->> Terima Kasih <<-=-=-=-=-=-=-=-=-=-=" << endl;
		cout <<"!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!" << endl;

return 0;
}