//judul		: ngiitung durasi waktu
//memo      : Latihan David S Daspro

#include <iostream>
using namespace std;

//kamus		:

//diskripsi	:
main()
{
    int jAwal, mAwal, dAwal;
    int jAkhir, mAkhir, dAkhir;
    int durasi;
    int totDetAwal;
    int totDetAkhir;

    cout<<"=====menghitung waktu====="<<endl;

    cout<<" masukkan jam awal = "; 	    cin >> jAwal;
    cout<<" masukkan menit awal = ";     cin >> mAwal;
    cout<<" masukkan detik awal = ";     cin >> dAwal;

    cout<<" masukkan jam akhir = ";	    cin >> jAkhir;
    cout<<" masukkan menit akhir = ";    cin >> mAkhir;
    cout<<" masukkan detik akhir = ";    cin >> dAkhir;

    totDetAwal = ((jAwal * 3600) + (mAwal * 60) + (dAwal));
    totDetAkhir = ((jAkhir * 3600) + (mAkhir * 60) + (dAkhir));

    cout<<" maka total detik awal adalah " << totDetAwal;
    cout<<" maka total detik akhir adalah " << totDetAkhir;

    durasi = totDetAwal - totDetAkhir;

    cout<<" waktu durasinya adalah " << durasi << endl;
}
