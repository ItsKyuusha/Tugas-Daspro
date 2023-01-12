//judul	: Latihan Abstract Data Type
//		: David Sugiarto
//		: Dasar Pemrograman

#include <iostream>
using namespace std;

//kamus
/*	int tglLnarto,blnLnarto,thnLnarto;
	int tglLsaskeh,blnLsaskeh,thnLsaskeh;
	int DDBsiti,MMBsiti,YYYYBsiti;
*/
	struct narto {
		int tglLnarto;
		int blnLnarto;
		int thnLnarto;
	};
	struct saskeh {
		int tglLsaskeh;
		int blnLsaskeh;
		int thnLsaskeh;
	};
	struct siti {
		int DDBsiti;
		int MMBsiti;
		int YYYYBsiti;
	};
	struct DATE {
		int lhrnarto;
		int lhrsaskeh;
		int lhrsiti;
	};
	struct TIME {
		int jam;
		int menit;
		int detik;
	};
	struct DateTime {
		DATE tanggal;
		TIME waktu;
	};
	
//diskkripsi
main()
{
/* before = 	
	cout <<" =-=-=-=-=->> Mendata Tanggal Lahir Teman-Temanku <<-=-=-=-=-= " << endl;
	cout <<" =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= " << endl;
	cout << endl;
	
	cout <<" masukkan data lahir narto : ";
	cin >> tglLnarto;
	cin >> blnLnarto;
	cin >> thnLnarto;
	
	cout <<" masukkan data lahir saskeh : ";
	cin >> tglLsaskeh;
	cin >> blnLsaskeh;
	cin >> thnLsaskeh;
	
	cout <<" masukkan data lahir siti : ";
	cin >> DDBsiti;
	cin >> MMBsiti;
	cin >> YYYYBsiti;
	
	cout << endl;
	
	cout <<" data narto : " << tglLnarto << ";" << blnLnarto << ";" << thnLnarto << endl;
	cout <<" data saskeh : " << tglLsaskeh << "; " << blnLsaskeh << ";" << thnLsaskeh << endl;
	cout <<" data siti : " << DDBsiti << ";" << MMBsiti << ";" << YYYYBsiti << endl;
*/

struct narto DTnarto;
struct saskeh DTsaskeh;
struct siti DTsiti;
struct DATE date;
struct TIME time;
struct DATETIME datetime;

	cout <<" =-=-=-=-=->> Mendata Tanggal Lahir Teman-Temanku <<-=-=-=-=-= " << endl;
	cout <<" =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= " << endl;
	cout << endl;
	
	cout <<" masukkan data narto : ";
	cin >> DTnarto.tglLnarto;
	cin >> DTnarto.blnLnarto;
	cin >> DTnarto.thnLnarto;
	
	cout <<" masukkan datta saskeh : ";
	cin >> DTsaskeh.tglLsaskeh;
	cin >> DTsaskeh.blnLsaskeh;
	cin >> DTsaskeh.thnLsaskeh;
	
	cout <<"  masukkan data siti : ";
	cin >> DTsiti.DDBsiti;
	cin >> DTsiti.MMBsiti;
	cin >> DTsiti.YYYYBsiti;
	
	cout <<" masukkan date all : ";
	cin >> date.lhrnarto;
	cin >> date.lhrsaskeh;
	cin >> date.lhrsiti;
	
	cout <<" masukkan DATE : ";
	cin >> date.
	
	cout <<  endl;
	
	cout <<" data narto : " << DTnarto.tglLnarto << ";" << DTnarto.blnLnarto << ";" << DTnarto.thnLnarto << endl;
	cout <<" data saskeh : " << DTsaskeh.tglLsaskeh << ";" << DTsaskeh.blnLsaskeh << ";" << DTsaskeh.thnLsaskeh << endl;
	cout <<" data siti : " << DTsiti.DDBsiti << ";" << DTsiti.MMBsiti << ";" << DTsiti.YYYYBsiti << endl; 
	cout <<" date all : " << date.lhrnarto << ";" << date.lhrsaskeh << ";" << date.lhrsiti << endl;
	
}
