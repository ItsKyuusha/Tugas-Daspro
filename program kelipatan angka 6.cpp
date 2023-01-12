//judul : membuat program kelipatan angka 6 (dari 0-100)
//		: david sugiarto
//		: dasar pemrograman
//		: 9 oktober 2022

#include <iostream>
using namespace std;

//kamus
	int x;
	int batas;
	int total;
//diskripsi

main()
{
	cout << " ==========> program kelipatan angka 6 <========== " << endl;
	cout << " =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= " << endl;
	
	cout << " masukkan angka : ";		cin >> x;
	cout << " masukkan batas : ";		cin >> batas;

    total=0;

    for (x=6;x<=batas+6;x=x+6)
	{
        cout << x <<" ";
        total = total + x;
    }
    cout << " total jumlah kelipatannya adalah = "<< total;
	return 0;
	
}