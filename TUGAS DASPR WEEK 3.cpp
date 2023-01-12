//judul
//membuat program input output sederhana
//matkul : dasar pemrograman
//dosen : ifan rizqa
//tanggal :  15 september

#include <iostream>
using namespace std;

//kamus
	string nama;
	string nim;
	string alamat;
	string prodi;
	string hobi;
	string citacita;
//diskripsi
int main()
{
	cout <<"==========> HELLO GESS SUGENG RAWUH <=========="<<endl;
	cout <<"masukkan nama" 		<<endl;		cin >> nama;
	cout <<"masukkan nim"		<<endl;		cin >> nim;
	cout <<"masukkan alamat"	<<endl;		cin >> alamat;
	cout <<"masukkan prodi"		<<endl;		cin >> prodi;
	cout <<"masukkan hobi"		<<endl;		cin >> hobi;
	cout <<"masukkan citacita"	<<endl;		cin >> citacita;
	
	
	cout << " nama kamu adalah " << nama;
	cout << " nim kamu adalah " << nim;
	cout << " alamat kamu adalah " << alamat;
	cout << " prodi kamu adalah " << prodi;
	cout << " hobi kamu adalah " << hobi;
	cout << " cita cita kamu adalah " << citacita;

return 0;
}

