//judul : kisi kisi uts dasar pemrograman
//		: david sugiarto
//		: 2 novembeer 2022

#include <iostream>
#include <conio.h>
using namespace std;

//kamus
	int NoPeserta,wAwal,wAkhir;
	int nSisi1,nSisi2,nAlas,nSudut;
	int a,b,c,d;
	char yt;
	char ulang; //Y/T
	int nomor;
	int jawal,mawal,dawal,jakhir,makhir,dakhir,durasi;
	int A,B;
	int hari,jam,hour,menit,detik;
	int nAwalan,nAkhiran,jarak,x,y,z,bilGanjil,bilsisa;
//diskripsi
/*
==========>> SOAL UTS DASPRO PRAKTEK <<==========

1.  Terdapat sebuah kegiatan perlombaan membangun sebuah patung/miniatur yang diikuti oleh puluhan bahkan ratusan peserta.
	Sebelum acara dimulai, panitia merasa kesulitan dalam menentukan pemenang dan pemberian hadiah2, dikarenakan merujuk pada kecepatan penyelesaian patung/miniatur.
    Buatlah solusi(notasi algoritma) untuk membantu menghitung durasi waktu tiap peserta pertama - peserta terakhir & bukan merekam durasi waktu
    Initial State : input integer --> NoPeserta, Waktu Awal&Akhir(Format J:M:D)
    Final State	 : Durasi waktu pengerjaan (H:J:M:D) [Hari,Jam,Menit,Detik]
				   # jikalau menggunakan loop [y/t] gunakan while atau repeat until

2.  Terdapat perintah membuat notasi untuk menghasilkan deret dengan awalan-akhhiran-space dari deret tersebut tergantung dari user.
	Dan perintah selanjutnya adalah menghasilkan total jumlah elemen dari deret tersebut :
    Initial State : input integer untuk: N(awalan), M(akhiran), J(jarak)
    Final State	 : output --> (N=3)..3(J=3)6 9 12 15 18 .. (M=18)=jumlah (63)
		   		   output --> pada berapa bilangan ganjil, berapa total jumlah bilangan yang habis dibagi 3&6
		   					  # jikalau menyertakan loop, gunakan repeat until atau while

3.  Sebuah stationary specialist penjual penggaris, menjual berbagai macam jenis penggaris. Diantaranya adalah penggaris segitiga.
	Toko tersebut akan memberikan fasilitas untuk memudahkan deteksi jenis penggaris segitiganya. Apakah sama sisi, sama kaki, lancip, tumpul, atau siku-siku.
	Dan calon pembeli akan bertanya kepada system berkali-kali(lebih dari 1x model penggaris yang ditanyakan)
    Buatlah notasi algoritmanya
    Initial State : input integer untuk nilai sisinya atau nilai sudutnya. & [Y/T]
    Final State	 : status atau jenis segitiga
		   		   # jikalau menyertakan loop, gunakan repeat until atau while

4.  Terdapat sebuah deret atau barisan angka, seperti berikut:
	 2 9 4 8 6 7 8 6 10 5 12 4 14 3 16 2 18 1 20 0 22
	 2 9 4 8 6 7 8 6 10 5 12 4 14 3 16 2 18 1 20 0 22
	 2 9 4 8 6 7 8 6 10 5 12 4 14 3 16 2 18 1 20 0 22
	 2 9 4 8 6 7 8 6 10 5 12 4 14 3 16 2 18 1 20 0 22
    Buatlah notasi algoritma untuk dapat menghasilkan output seperti diatas
	 # jikalau menyertakan loop, gunakan repeat until atau while

5. 

6.  Terdapat sebuah deret atau barisan angka, seperti berikut:
	 3 6 9 12 15 18 21 24 27 30 33 36 39
    Buatlah loop yag menghasilkan luaran seperti diatas
    Kemudian tambahkan untuk menghitung/mengetahui
	 - ada berapa bilangan genap
	 - berapa total jumlah bilangan genapnya
	 - ada berapa bilangan genap yang habis (tidak ada sisa) jika dibagi 8
*/

main()
{
//No. 1
/*
nomor = 0;
do
{
    nomor = nomor + 1;
    cout <<" nomor urut: " << nomor << endl;
    cout <<" masukkan Jam mula2 : ";		cin >> jawal;
    cout <<" masukkan menit mula2 : ";		cin >> mawal;
    cout <<" masukkan detik mula2 : ";		cin >> dawal;
    cout << endl;
    cout <<" masukkan Jam terakhir : ";			cin >> jakhir;
    cout <<" masukkan menit terakhir : ";		cin >> makhir;
    cout <<" masukkan detik terakhir : ";		cin >> dakhir;

    if(jawal<=jakhir)
	{
		hari=(jakhir-jawal)/24;
	}
    else
	{
		return 0;
	}

    A = (jawal * 3600)+(mawal * 60) + dawal;
    B = (jakhir * 3600)+(makhir * 60) + dakhir;
    durasi = B - A;

    jam = durasi / 3600;
    menit = (durasi % 3600) / 60;
    detik = (durasi % 3600) % 60;

    if(jam-24<=0)
	{
		hour=jam%24;
	}
    else
	{
		hour=jam;
	}
    cout << endl;

    cout <<" durasi peserta urut " << nomor <<" : " << hari <<" Hari " << hour <<" Jam " << menit <<" Menit " << detik <<" Detik " << endl;
    cout <<" masukkan data selanjutnya ? [Y/T] ";			cin >> ulang;
}
while(ulang=='Y'|ulang=='y');	
*/

//-------------------------------------------------------------------------

//No. 2
	cout <<" masukkan nilai awal : ";		cin >> nAwalan;
	cout <<" masukkan nilai akhir : ";		cin >> nAkhiran;
	cout <<" masukkan nilai jarak : ";		cin >> jarak;
	
	z = 0;	
	while(z<=10)
	{
		x <=30;
		cout << x <<" ";
		x = x + jarak; 
		z++;	
		
	}
	bilGanjil = x/3;
	bilsisa = x%3|x%6;
	
	cout << endl;
	cout <<" jumlah bilangan ganjil : " << bilGanjil << endl;
	cout <<" total jumlah bilangan yang habis dibagi 3 & 6 : " << bilsisa << endl;

	
//No. 3
/*	cout <<" ==========>> DETEKSI JENIS PENGGARIS <<========== " << endl;
	cout <<" masukkan nilai sisi 1 : ";			cin >> nSisi1;
	cout <<" masukkan nilai sisi 2 : ";			cin >> nSisi2;
	cout <<" masukkan nilai sisi alas : ";		cin >> nAlas;
	cout <<" masukkan nilai sudut segitiga : ";		cin >> nSudut;
	
	if(nSisi1=nSisi2,nAlas)
	{
		cout <<" segitiga sama sisi " << endl;
	}
	else if(nSisi2=nSisi1,nAlas)
	{
		cout <<" segitiga sama sisi " << endl;
	}
	else if(nAlas=nSisi1,nSisi2)
	{
		cout <<" segitiga sama sisi " << endl;
	}
	else if(nAlas!nSisi1)
		{
			cout <<" segitiga sama kaki " << endl;
		}
		else
		{
			cout <<" tergantung sudut " << endl;
		}
	
	if(nSudut<90)
	{
		cout <<" segitiga lancip " << endl;
	}
	else if(nSudut=90)
		{
			cout <<" segitiga siku-siku " << endl;
		}
		else if(nSudut>90)
			{
				cout <<" segitiga tumpul " << endl;
			}
			else
			{
				cout <<" bukan segitiga " << endl;
			}
*/

//-------------------------------------------------------------------------

//No. 6
/*
a = 0;
b = 0;			//total jumlah bilangan genap
c = 0;			//banyak bilangan genap
d = 0;			//kelipatan angka 8
while(a<=39)
{
    cout<<a<<" ";
    if(a%2==0)
    {
        b=b+a;
        c=c+1;
    	if(a%8==0)
   		{
    		d=d+1;
    	}
    }
	a=a+3;
}
cout << endl <<" total genap: " << b << endl << " banyak genap: " << c << endl;
cout <<" kelipatan 8 = " << d << endl;
*/

//---------------------------------------------------------------


}