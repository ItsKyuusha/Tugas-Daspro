#include <iostream>
using namespace std;

main()
{

	int n_mid1,n_mid2,n_mid3,n_mid4,n_mid5,n_mid6,n_mid7;
	int n_uas1,n_uas2,n_uas3,n_uas4,n_uas5,n_uas6,n_uas7;
	int n_tugas1,n_tugas2,n_tugas3,n_tugas4,n_tugas5,n_tugas6,n_tugas7;
	float totNilai1,totNilai2,totNilai3,totNilai4,totNilai5,totNilai6,totNilai7,ratarata,score;

	cout <<"nilai mid 1 = ";	cin >> n_mid1;

	cout <<"niali uas 1 = ";	cin >> n_uas1;
	
	cout <<"niali tugas 1 = ";	cin >> n_tugas1;
	
	score = (n_mid1 * 30)/100 + (n_uas1 * 30/100) + (n_tugas1 * 40/100);
	
	
		cout <<" Total mid 1 adalah = " << score << endl;
		
		
}