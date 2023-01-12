#include <iostream>
using namespace std;

;
char y[2];
char n[2];
char confir;
int main()

{
	awal:
		
	cout <<"apakah anda ingin mengulang?" << endl;
	cin >> confir;
	
	switch(confir)
	{
		case'y':
				cout <<" baiklah kita mulai " << endl;
			break;
		
		case'n':
				cout <<" ulang lagi dong " << endl;
				goto awal;
			break;
			
			default :
            	cout << " input kode salah " << endl;
            	cout << " ulangi input kode " << endl;
            break;			
	}
	
}