//judul : mencari rata dan nilai
//	: 14 september 2022
//	: david sugiarto
//	: D2G
#include <iostream>
using namespace std;
	int bill;
	int bilangan1;
	int bilangan2;
	float angka1;
	float angka2;
	float rtrt;

//diskripsi
main()
{

	cout <<"======mencari rata rata======"<<endl;
	bill = 80;
	bilangan1 = 75;
	bilangan2 = 90;
	angka1 = 75,5;
	angka2 = 85,5;
	cout <<"masukkan nilai :80 " <<endl;
	cout <<"masukkan nilai :75 " <<endl;
	cout <<"masukkan nilai :90 " <<endl;
	cout <<"masukkan nilai :75,5 " <<endl;
	cout <<"masukkan niali :85,5 " <<endl;

	rtrt = (bill + bilangan1 + bilangan2 + angka1 + angka2) / 5;
	cout <<"nilai ke 1 : " << bill << endl;
	cout <<"nilai ke 2 : " << bilangan1 << endl;
	cout <<"nilai ke 3 : " << bilangan2 << endl;
	cout <<"nilai ke 4 : " << angka1 << endl;
	cout <<"nilai ke 5 : " << angka2 << endl;

	cout <<"maka nilai rata ratanya adalah " <<rtrt;

	//status rata
//sangat bagus	> =100
//bagus	80 >> & < 100
//cukup 60 >> & < 80
//buruk 0 >> & < 60

	if (rtrt >= 100)
	
		{
			cout <<"sangat bagus";
		}
	else
		if ((rtrt >= 80)and(rtrt < 100))
			{
				cout <<"bagus";
			}
		else
			if ((rtrt >= 60)and(rtrt < 80))
			{
				cout <<"cukup";
			}
			else
				if ((rtrt <= 0)and(rtrt <= 60))
				{
					cout <<"buruk";
				}
				else
					{
						cout <<"tidak dalam jangkauan";
					}
}
