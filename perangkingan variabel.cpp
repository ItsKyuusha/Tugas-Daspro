//judul	: membuat perangkingan variabel
//	: david sugiarto
//	: 7 oktober 2022
//	: dasar pemrograman

#include <iostream>
using namespace std;

//kamus
	int a,b,c,d,e;
//diskripsi

main()
{
	cout << " ==========> Perangkingan Variabel <========== " << endl;
	cout << " =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= " << endl;
	
	cout << " masukkan variabel A : ";		cin >> a;
	cout << " masukkan variabel B : ";		cin >> b;
	cout << " masukkan variabel C : ";		cin >> c;
	cout << " masukkan variabel D : ";		cin >> d;
	cout << " masukkan variabel E : ";		cin >> e;
	
    cout << endl;
	
	//mencari nilai terbesar dari variabel
	if (a == b|a == c|a == d|a == e|b == c|b == d|b == e|c == d|c == e|d == e)
	{
		cout << " nilai tidak boleh sama " << endl;
	}
    else if (a > b && a > c && a > d && a > e)
    {
        cout << " nilai terbesar adalah : " << a << endl;
    }
    else if (b > a && b > c && b > d && b > e)
    {
        cout << " nilai terbesar adalah : " << b << endl;
    }
    else if (c > b && c > a && c > d && c > e)
    {
        cout << " nilai terbesar adalah : " << c << endl;
    }
    else if (d > b && d > c && d > a && d > e)
    {
        cout << " nilai terbesar adalah : " << d << endl;
    }
    else
    {
        cout << " nilai terbesar adalah : " << e << endl;
    }
    
//---------------------------------------------------------------------------------------------------------------------------
	//mwncari nilai terkecil dari variabel
	if (a < b && a < c && a < d && a < e)
    {
        cout << " nilai terkecil adalah : " << a << endl;
    }
    else if (b < a && b < c && b < d && b < e)
    {
        cout << " nilai terkecil adalah : " << b << endl;
    }
    else if (c < b && c < a && c < d && c < e)
    {
        cout << " nilai terkecil adalah : " << c << endl;
    }
    else if (d < b && d < c && d < a && d < e)
    {
        cout << " nilai terkecil adalah : " << d << endl;
    }
    else
    {
        cout << " nilai terkecil adalah : " << e << endl;
    }
//---------------------------------------------------------------------------------------------------------------------------
    //mengurutkan nilai dari variabel terbesar
	if (a > b && b > c && c > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << c << " " << d << " " << e << endl;
    }
    else if (a > b && b > c && c > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << c << " " << e << " " << d << endl;
    }
    else if (a > c && c > b && b > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << b << " " << d << " " << e << endl;
    }
    else if (a > c && c > b && b > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << b << " " << e << " " << d << endl;
    }
    else if (a > d && d > e && e > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << e << " " << b << " " << c << endl;
    }
    else if (a > d && d > e && e > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << e << " " << c << " " << b << endl;
    }
    else if (a > e && e > d && d > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << d << " " << c << " " << b << endl;
    }
    else if (a > e && e > d && d > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << d << " " << b << " " << c << endl;
    }
    else if (a > b && b > d && d > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << d << " " << e << " " << c << endl;
    }
    else if (a > b && b > d && d > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << d << " " << c << " " << e << endl;
    }
    else if (a > d && d > b && b > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << b << " " << c << " " << e << endl;
    }
    else if (a > d && d > b && b > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << b << " " << e << " " << c << endl;
    }
    else if (a > e && e > c && c > b && b > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << c << " " << b << " " << d << endl;
    }
    else if (a > e && e > c && c > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << c << " " << d << " " << b << endl;
    }
    else if (a > c && c > e && e > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << e << " " << d << " " << b << endl;
    }
    else if (a > c && c > e && e > b && b > d)
    {
cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << e << " " << b << " " << d << endl;
    }
    else if (a > b && b > e && e > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << e << " " << c << " " << d << endl;
    }
    else if (a > b && b > e && e > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << e << " " << d << " " << c << endl;
    }
    else if (a > e && e > b && b > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << b << " " << d << " " << c << endl;
    }
    else if (a > e && e > b && b > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << b << " " << c << " " << d << endl;
    }
    else if (a > c && c > d && d > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << d << " " << b << " " << e << endl;
    }
    else if (a > c && c > d && d > e && e > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << d << " " << e << " " << b << endl;
    }
    else if (a > d && d > c && c > e && e > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << d << " " << e << " " << b << endl;
    }
    else if (a > d && d > c && c > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << c << " " << b << " " << e << endl;
    }
    else if (b > a && a > c && c > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << c << " " << d << " " << e << endl;
    }
    else if (b > a && a > c && c > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << c << " " << e << " " << d << endl;
    }
    else if (b > c && c > a && a > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << a << " " << d << " " << e << endl;
    }
    else if (b > c && c > a && a > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << a << " " << e << " " << d << endl;
    }
    else if (b > d && d > e && e > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << e << " " << a << " " << c << endl;
    }
    else if (b > d && d > e && e > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << e << " " << c << " " << a << endl;
    }
    else if (b > e && e > d && d > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << d << " " << c << " " << a << endl;
    }
    else if (b > e && e > d && d > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << d << " " << a << " " << c << endl;
    }
    else if (b > a && a > d && d > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << d << " " << e << " " << c << endl;
    }
    else if (b > a && a > d && d > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << d << " " << c << " " << e << endl;
    }
    else if (b > d && d > a && a > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << a << " " << c << " " << e << endl;
    }
    else if (b > d && d > a && a > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << a << " " << e << " " << c << endl;
    }
	else if (b > e && e > c && c > a && a > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << c << " " << a << " " << d << endl;
    }
    else if (b > e && e > c && c > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << c << " " << d << " " << a << endl;
    }
    else if (b > c && c > e && e > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << e << " " << d << " " << a << endl;
    }
    else if (b > c && c > e && e > a && a > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << e << " " << a << " " << d << endl;
    }
    else if (b > a && a > e && e > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << e << " " << c << " " << d << endl;
    }
    else if (b > a && a > e && e > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << e << " " << d << " " << c << endl;
    }
    else if (b > e && e > a && a > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << a << " " << d << " " << c << endl;
    }
    else if (b > e && e > a && a > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << a << " " << c << " " << d << endl;
    }
    else if (b > c && c > d && d > a && a > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << d << " " << a << " " << e << endl;
    }
    else if (b > c && c > d && d > e && e > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << d << " " << e << " " << a << endl;
    }
    else if (b > d && d > c && c > e && e > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << c << " " << e << " " << a << endl;
    }
    else if (b > d && d > c && c > a && a > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << c << " " << a << " " << e << endl;
    }
    else if (c > a && a > b && b > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << a << " " << b << " " << d << " " << e << endl;
    }
    else if (c > a && a > b && b > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << a << " " << b << " " << e << " " << d << endl;
    }
    else if (c > b && b > a && a > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << b << " " << a << " " << d << " " << e << endl;
    }
    else if (c > b && b > a && a > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << b << " " << a << " " << e << " " << d << endl;
    }
    else if (c > d && d > e && e > a && a > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << d << " " << e << " " << a << " " << b << endl;
    }
    else if (c > d && d > e && e > b && b > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << d << " " << e << " " << b << " " << a << endl;
    }
    else if (c > e && e > d && d > b && b > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << e << " " << d << " " << b << " " << a << endl;
    }
    else if (c > e && e > d && d > a && a > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << e << " " << d << " " << a << " " << b << endl;
    }
    else if (c > a && a > d && d > e && e > b)
    {
cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << a << " " << d << " " << e << " " << b << endl;
    }
    else if (c > a && a > d && d > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << a << " " << d << " " << b << " " << e << endl;
    }
    else if (c > d && d > a && a > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << d << " " << a << " " << b << " " << e << endl;
    }
    else if (c > d && d > a && a > e && e > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << d << " " << a << " " << e << " " << b << endl;
    }
    else if (c > e && e > b && b > a && a > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << e << " " << b << " " << a << " " << d << endl;
    }
    else if (c > e && e > b && b > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << e << " " << b << " " << d << " " << a << endl;
    }
    else if (c > b && b > e && e > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << b << " " << e << " " << d << " " << a << endl;
    }
    else if (c > b && b > e && e > a && a > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << b << " " << e << " " << a << " " << d << endl;
    }
    else if (c > a && a > e && e > b && b > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << a << " " << e << " " << b << " " << d << endl;
    }
    else if (c > a && a > e && e > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << a << " " << e << " " << d << " " << b << endl;
    }
    else if (c > e && e > a && a > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << e << " " << a << " " << d << " " << b << endl;
    }
    else if (c > e && e > a && a > b && b > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << e << " " << a << " " << b << " " << d << endl;
    }
    else if (c > b && b > d && d > a && a > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << b << " " << d << " " << a << " " << e << endl;
    }
    else if (c > b && b > d && d > e && e > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << b << " " << d << " " << e << " " << a << endl;
    }
    else if (c > d && d > b && b > e && e > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << d << " " << b << " " << e << " " << a << endl;
    }
    else if (c > d && d > b && b > a && a > e) 
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << c << " " << d << " " << b << " " << a << " " << e << endl;
    }
    else if (d > a && a > b && b > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << b << " " << c << " " << e << endl;
    }
    else if (d > a && a > b && b > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << b << " " << e << " " << c << endl;
    }
    else if (d > b && b > a && a > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << b << " " << a << " " << c << " " << e << endl;
    }
    else if (d > a && a > b && b > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << b << " " << e << " " << c << endl;
    }
    else if (d > c && c > e && e > a && a > b)
    {
cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << c << " " << e << " " << a << " " << b << endl;
    }
    else if (d > c && c > e && e > b && b > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << c << " " << e << " " << b << " " << a << endl;
    }
    else if (d > e && e > c && c > b && b > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << e << " " << c << " " << b << " " << a << endl;
    }
    else if (d > e && e > c && c > a && a > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << e << " " << c << " " << a << " " << b << endl;
    }
    else if (d > a && a > c && c > e && e > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << c << " " << e << " " << b << endl;
    }
    else if (d > a && a > c && c > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << c << " " << b << " " << e << endl;
    }
    else if (d > c && c > a && a > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << c << " " << a << " " << b << " " << e << endl;
    }
    else if (d > c && c > a && a > e && e > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << c << " " << a << " " << e << " " << b << endl;
    }
    else if (d > e && e > b && b > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << e << " " << b << " " << a << " " << c << endl;
    }
    else if (d > e && e > b && b > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << e << " " << b << " " << c << " " << a << endl;
    }
    else if (d > b && b > e && e > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << b << " " << e << " " << c << " " << a << endl;
    }
    else if (d > b && b > e && e > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << b << " " << e << " " << a << " " << c << endl;
    }
    else if (d > a && a > e && e > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << e << " " << b << " " << c << endl;
    }
    else if (d > a && a > e && e > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << e << " " << c << " " << b << endl;
    }
    else if (d > e && e > a && a > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << e << " " << a << " " << c << " " << b << endl;
    }
    else if (d > e && e > a && a > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << e << " " << a << " " << b << " " << c << endl;
    }
    else if (d > b && b > c && c > a && a > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << b << " " << c << " " << a << " " << e << endl;
    }
    else if (d > b && b > c && c > e && e > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << b << " " << c << " " << e << " " << a << endl;
    }
    else if (d > c && c > b && b > e && e > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << c << " " << b << " " << e << " " << a << endl;
    }
    else if (d > c && c > b && b > a && a > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << c << " " << b << " " << a << " " << e << endl;
    }
    else if (e > a && a > b && b > c && c > d)
    {
		cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << a << " " << b << " " << c << " " << d << endl;
    }
    else if (e > a && a > b && b > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << a << " " << b << " " << d << " " << c << endl;
    }
    else if (e > b && b > a && a > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << b << " " << a << " " << c << " " << d << endl;
    }
    else if (e > b && b > a && a > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << b << " " << a << " " << d << " " << c << endl;
    }
    else if (e > c && c > d && d > a && a > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << c << " " << d << " " << a << " " << b << endl;
    }
    else if (e > c && c > d && d > b && b > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << c << " " << d << " " << b << " " << a << endl;
    }
    else if (e > d && d > c && c > b && b > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << d << " " << c << " " << b << " " << a << endl;
    }
    else if (e > d && d > c && c > a && a > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << d << " " << c << " " << a << " " << b << endl;
    }
    else if (e > a && a > c && c > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << a << " " << c << " " << d << " " << b << endl;
    }
    else if (e > a && a > c && c > b && b > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << a << " " << c << " " << b << " " << d << endl;
    }
    else if (e > c && c > a && a > b && b > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << c << " " << a << " " << b << " " << d << endl;
    }
    else if (e > c && c > a && a > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << c << " " << a << " " << d << " " << b << endl;
    }
    else if (e > d && d > b && b > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << d << " " << b << " " << a << " " << c << endl;
    }
    else if (e > d && d > b && b > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << d << " " << b << " " << c << " " << a << endl;
    }
    else if (e > b && b > d && d > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << b << " " << d << " " << c << " " << a << endl;
    }
    else if (e > b && b > d && d > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << b << " " << d << " " << a << " " << c << endl;
    }
    else if (e > a && a > d && d > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << a << " " << d << " " << b << " " << c << endl;
    }
    else if (e > a && a > d && d > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << a << " " << d << " " << c << " " << b << endl;
    }
    else if (e > d && d > a && a > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << d << " " << a << " " << c << " " << b << endl;
    }
    else if (e > d && d > a && a > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << d << " " << a << " " << b << " " << c << endl;
    }
    else if (e > b && b > c && c > a && a > d)
    {
cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << b << " " << c << " " << a << " " << d << endl;
    }
    else if (e > b && b > c && c > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << b << " " << c << " " << d << " " << a << endl;
    }
    else if (e > c && c > b && b > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << c << " " << b << " " << d << " " << a << endl;
    }
    else
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << e << " " << c << " " << b << " " << a << " " << d << endl;
    }

//mengurutkan nilai dari variabel terbesar
	if (a > b && b > c && c > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << c << " " << d << " " << e << endl;
    }
    else if (a > b && b > c && c > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << c << " " << e << " " << d << endl;
    }
    else if (a > c && c > b && b > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << b << " " << d << " " << e << endl;
    }
    else if (a > c && c > b && b > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << b << " " << e << " " << d << endl;
    }
    else if (a > d && d > e && e > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << e << " " << b << " " << c << endl;
    }
    else if (a > d && d > e && e > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << e << " " << c << " " << b << endl;
    }
    else if (a > e && e > d && d > c && c > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << d << " " << c << " " << b << endl;
    }
    else if (a > e && e > d && d > b && b > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << d << " " << b << " " << c << endl;
    }
    else if (a > b && b > d && d > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << d << " " << e << " " << c << endl;
    }
    else if (a > b && b > d && d > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << d << " " << c << " " << e << endl;
    }
    else if (a > d && d > b && b > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << b << " " << c << " " << e << endl;
    }
    else if (a > d && d > b && b > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << b << " " << e << " " << c << endl;
    }
    else if (a > e && e > c && c > b && b > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << c << " " << b << " " << d << endl;
    }
    else if (a > e && e > c && c > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << c << " " << d << " " << b << endl;
    }
    else if (a > c && c > e && e > d && d > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << e << " " << d << " " << b << endl;
    }
    else if (a > c && c > e && e > b && b > d)
    {
cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << e << " " << b << " " << d << endl;
    }
    else if (a > b && b > e && e > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << e << " " << c << " " << d << endl;
    }
    else if (a > b && b > e && e > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << b << " " << e << " " << d << " " << c << endl;
    }
    else if (a > e && e > b && b > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << b << " " << d << " " << c << endl;
    }
    else if (a > e && e > b && b > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << e << " " << b << " " << c << " " << d << endl;
    }
    else if (a > c && c > d && d > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << d << " " << b << " " << e << endl;
    }
    else if (a > c && c > d && d > e && e > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << c << " " << d << " " << e << " " << b << endl;
    }
    else if (a > d && d > c && c > e && e > b)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << d << " " << e << " " << b << endl;
    }
    else if (a > d && d > c && c > b && b > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << a << " " << d << " " << c << " " << b << " " << e << endl;
    }
    else if (b > a && a > c && c > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << c << " " << d << " " << e << endl;
    }
    else if (b > a && a > c && c > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << c << " " << e << " " << d << endl;
    }
    else if (b > c && c > a && a > d && d > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << a << " " << d << " " << e << endl;
    }
    else if (b > c && c > a && a > e && e > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << a << " " << e << " " << d << endl;
    }
    else if (b > d && d > e && e > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << e << " " << a << " " << c << endl;
    }
    else if (b > d && d > e && e > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << e << " " << c << " " << a << endl;
    }
    else if (b > e && e > d && d > c && c > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << d << " " << c << " " << a << endl;
    }
    else if (b > e && e > d && d > a && a > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << d << " " << a << " " << c << endl;
    }
    else if (b > a && a > d && d > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << d << " " << e << " " << c << endl;
    }
    else if (b > a && a > d && d > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << d << " " << c << " " << e << endl;
    }
    else if (b > d && d > a && a > c && c > e)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << a << " " << c << " " << e << endl;
    }
    else if (b > d && d > a && a > e && e > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << d << " " << a << " " << e << " " << c << endl;
    }
	else if (b > e && e > c && c > a && a > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << c << " " << a << " " << d << endl;
    }
    else if (b > e && e > c && c > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << c << " " << d << " " << a << endl;
    }
    else if (b > c && c > e && e > d && d > a)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << e << " " << d << " " << a << endl;
    }
    else if (b > c && c > e && e > a && a > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << c << " " << e << " " << a << " " << d << endl;
    }
    else if (b > a && a > e && e > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << e << " " << c << " " << d << endl;
    }
    else if (b > a && a > e && e > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << a << " " << e << " " << d << " " << c << endl;
    }
    else if (b > e && e > a && a > d && d > c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << a << " " << d << " " << c << endl;
    }
    else if (b > e && e > a && a > c && c > d)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << b << " " << e << " " << a << " " << c << " " << d << endl;
    }

//==========================================================================================================================

    else if (b < c && c < d && d < a && a < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << b << " " << c << " " << d << " " << a << " " << e << endl;
    }
    else if (b < c && c < d && d < e && e < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << b << " " << c << " " << d << " " << e << " " << a << endl;
    }
    else if (b < d && d < c && c < e && e < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << b << " " << d << " " << c << " " << e << " " << a << endl;
    }
    else if (b < d && d < c && c < a && a < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << b << " " << d << " " << c << " " << a << " " << e << endl;
    }
    else if (c < a && a < b && b < d && d < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << a << " " << b << " " << d << " " << e << endl;
    }
    else if (c < a && a < b && b < e && e < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << a << " " << b << " " << e << " " << d << endl;
    }
    else if (c < b && b < a && a < d && d < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << b << " " << a << " " << d << " " << e << endl;
    }
    else if (c < b && b < a && a < e && e < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << b << " " << a << " " << e << " " << d << endl;
    }
    else if (c < d && d < e && e < a && a < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << d << " " << e << " " << a << " " << b << endl;
    }
    else if (c < d && d < e && e < b && b < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << d << " " << e << " " << b << " " << a << endl;
    }
    else if (c < e && e < d && d < b && b < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << e << " " << d << " " << b << " " << a << endl;
    }
    else if (c < e && e < d && d < a && a < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << e << " " << d << " " << a << " " << b << endl;
    }
    else if (c < a && a < d && d < e && e < b)
    {
		cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << a << " " << d << " " << e << " " << b << endl;
    }
    else if (c < a && a < d && d < b && b < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << a << " " << d << " " << b << " " << e << endl;
    }
    else if (c < d && d < a && a < b && b < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << d << " " << a << " " << b << " " << e << endl;
    }
    else if (c < d && d < a && a < e && e < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << d << " " << a << " " << e << " " << b << endl;
    }
    else if (c < e && e < b && b < a && a < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << e << " " << b << " " << a << " " << d << endl;
    }
    else if (c < e && e < b && b < d && d < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << e << " " << b << " " << d << " " << a << endl;
    }
    else if (c < b && b < e && e < d && d < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << b << " " << e << " " << d << " " << a << endl;
    }
    else if (c < b && b < e && e < a && a < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << b << " " << e << " " << a << " " << d << endl;
    }
    else if (c < a && a < e && e < b && b < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << a << " " << e << " " << b << " " << d << endl;
    }
    else if (c < a && a < e && e < d && d < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << a << " " << e << " " << d << " " << b << endl;
    }
    else if (c < e && e < a && a < d && d < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << e << " " << a << " " << d << " " << b << endl;
    }
    else if (c < e && e < a && a < b && b < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << e << " " << a << " " << b << " " << d << endl;
    }
    else if (c < b && b < d && d < a && a < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << b << " " << d << " " << a << " " << e << endl;
    }
    else if (c < b && b < d && d < e && e < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << b << " " << d << " " << e << " " << a << endl;
    }
    else if (c < d && d < b && b < e && e < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << d << " " << b << " " << e << " " << a << endl;
    }
    else if (c < d && d < b && b < a && a < e) 
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << c << " " << d << " " << b << " " << a << " " << e << endl;
    }
    else if (d < a && a < b && b < c && c < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << a << " " << b << " " << c << " " << e << endl;
    }
    else if (d < a && a < b && b < e && e < c)
    {
        cout << " jika diurutkan dari yang terbesar menjadi " << d << " " << a << " " << b << " " << e << " " << c << endl;
    }
    else if (d < b && b < a && a < c && c < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << b << " " << a << " " << c << " " << e << endl;
    }
    else if (d < a && a < b && b < e && e < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << a << " " << b << " " << e << " " << c << endl;
    }
    else if (d < c && c < e && e < a && a < b)
    {
		cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << c << " " << e << " " << a << " " << b << endl;
    }
    else if (d < c && c < e && e < b && b < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << c << " " << e << " " << b << " " << a << endl;
    }
    else if (d < e && e < c && c < b && b < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << e << " " << c << " " << b << " " << a << endl;
    }
    else if (d < e && e < c && c < a && a < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << e << " " << c << " " << a << " " << b << endl;
    }
    else if (d < a && a < c && c < e && e < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << a << " " << c << " " << e << " " << b << endl;
    }
    else if (d < a && a < c && c < b && b < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << a << " " << c << " " << b << " " << e << endl;
    }
    else if (d < c && c < a && a < b && b < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << c << " " << a << " " << b << " " << e << endl;
    }
    else if (d > c && c < a && a < e && e < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << c << " " << a << " " << e << " " << b << endl;
    }
    else if (d < e && e < b && b < a && a < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << e << " " << b << " " << a << " " << c << endl;
    }
    else if (d < e && e < b && b < c && c < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << e << " " << b << " " << c << " " << a << endl;
    }
    else if (d < b && b < e && e < c && c < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << b << " " << e << " " << c << " " << a << endl;
    }
    else if (d < b && b < e && e < a && a < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << b << " " << e << " " << a << " " << c << endl;
    }
    else if (d < a && a < e && e < b && b < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << a << " " << e << " " << b << " " << c << endl;
    }
    else if (d < a && a < e && e < c && c < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << a << " " << e << " " << c << " " << b << endl;
    }
    else if (d < e && e < a && a < c && c < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << e << " " << a << " " << c << " " << b << endl;
    }
    else if (d < e && e < a && a < b && b < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << e << " " << a << " " << b << " " << c << endl;
    }
    else if (d < b && b < c && c < a && a < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << b << " " << c << " " << a << " " << e << endl;
    }
    else if (d < b && b < c && c < e && e < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << b << " " << c << " " << e << " " << a << endl;
    }
    else if (d < c && c < b && b < e && e < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << c << " " << b << " " << e << " " << a << endl;
    }
    else if (d < c && c < b && b < a && a < e)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << d << " " << c << " " << b << " " << a << " " << e << endl;
    }
    else if (e < a && a < b && b < c && c < d)
    {
		cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << a << " " << b << " " << c << " " << d << endl;
    }
    else if (e < a && a < b && b < d && d < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << a << " " << b << " " << d << " " << c << endl;
    }
    else if (e < b && b < a && a < c && c < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << b << " " << a << " " << c << " " << d << endl;
    }
    else if (e < b && b < a && a < d && d < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << b << " " << a << " " << d << " " << c << endl;
    }
    else if (e < c && c < d && d < a && a < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << c << " " << d << " " << a << " " << b << endl;
    }
    else if (e < c && c < d && d < b && b < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << c << " " << d << " " << b << " " << a << endl;
    }
    else if (e < d && d < c && c < b && b < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << d << " " << c << " " << b << " " << a << endl;
    }
    else if (e < d && d < c && c < a && a < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << d << " " << c << " " << a << " " << b << endl;
    }
    else if (e < a && a < c && c < d && d < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << a << " " << c << " " << d << " " << b << endl;
    }
    else if (e < a && a < c && c < b && b < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << a << " " << c << " " << b << " " << d << endl;
    }
    else if (e < c && c < a && a < b && b < d)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << c << " " << a << " " << b << " " << d << endl;
    }
    else if (e < c && c < a && a < d && d < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << c << " " << a << " " << d << " " << b << endl;
    }
    else if (e < d && d < b && b < a && a < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << d << " " << b << " " << a << " " << c << endl;
    }
    else if (e < d && d < b && b < c && c < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << d << " " << b << " " << c << " " << a << endl;
    }
    else if (e < b && b < d && d < c && c < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << b << " " << d << " " << c << " " << a << endl;
    }
    else if (e < b && b < d && d < a && a < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << b << " " << d << " " << a << " " << c << endl;
    }
    else if (e < a && a < d && d < b && b < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << a << " " << d << " " << b << " " << c << endl;
    }
    else if (e < a && a < d && d < c && c < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << a << " " << d << " " << c << " " << b << endl;
    }
    else if (e < d && d < a && a < c && c < b)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << d << " " << a << " " << c << " " << b << endl;
    }
    else if (e < d && d < a && a < b && b < c)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << d << " " << a << " " << b << " " << c << endl;
    }
    else if (e < b && b < c && c < a && a < d)
    {
		cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << b << " " << c << " " << a << " " << d << endl;
    }
    else if (e < b && b < c && c < d && d < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << b << " " << c << " " << d << " " << a << endl;
    }
    else if (e < c && c < b && b < d && d < a)
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << c << " " << b << " " << d << " " << a << endl;
    }
    else
    {
        cout << " jika diurutkan dari yang terkecil menjadi " << e << " " << c << " " << b << " " << a << " " << d << endl;
    }

    return 0;
}