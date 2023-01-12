/*
judul   : latihan2
Programer   : Azmi Jalaluddin Amron
Modify      : ke 3 pada 12/4/2022
*/

#include <iostream>
#include <string.h> //mengenali strupr
#include <conio.h> //mengenali getch() dan clrscr()
using namespace std;

//kamus
    int konsonan, vokal, i, kata, katadinus;
    //jika ada spasi
    char ArrKalimat[20]; //tanpa input  //= "AKU CAH DINUS "; /* bisa juga ditulis */ //= {'A', 'K', 'U', ' ', 'C', 'A', 'H', ' ', 'D', 'I', 'N', 'U', 'S'};


//deskripsi
    int main()
    {
        //coba gunakan input
        cout << "Kalimat    : ";
        cin.getline(ArrKalimat, 20);
        //cin >> ArrKalimat;
        strupr(ArrKalimat);
        cout << ArrKalimat;

        /* Bagian dari pencarian */
        
        i = 0;
        kata = 1;
        vokal = 0;
        konsonan = 0;
        katadinus = 0;
        while(i < 100)
        {
            if(ArrKalimat[i]=='A' || ArrKalimat[i]=='I' || ArrKalimat[i]=='U' || ArrKalimat[i]=='E' || ArrKalimat[i]=='O')
            {
                vokal = vokal + 1;
            }
            else if(ArrKalimat[i]==' ')
            {
                kata = kata + 1;
            }
            else if(ArrKalimat[i]=='Q' || ArrKalimat[i]=='W' || ArrKalimat[i]=='R' || ArrKalimat[i]=='T' || ArrKalimat[i]=='Y' || ArrKalimat[i]=='P' || ArrKalimat[i]=='S' || ArrKalimat[i]=='D' || ArrKalimat[i]=='F' || ArrKalimat[i]=='G' || ArrKalimat[i]=='H' || ArrKalimat[i]=='J' || ArrKalimat[i]=='K' || ArrKalimat[i]=='L' || ArrKalimat[i]=='Z' || ArrKalimat[i]=='X' || ArrKalimat[i]=='C' || ArrKalimat[i]=='V' || ArrKalimat[i]=='B' || ArrKalimat[i]=='N' || ArrKalimat[i]=='M')
            {
                konsonan = konsonan + 1;
            }
			
            i = i + 1;
        }
        
        i = 0;
        while(i < 100)
        {
        	if(ArrKalimat[i]=='D' && ArrKalimat[i+1]=='I' && ArrKalimat[i+2]=='N' && ArrKalimat[i+3]=='U' && ArrKalimat[i+4]=='S')
			{
				katadinus = katadinus + 1;
			}
			i = i + 1;
		}
		
        /* Output Screen */
        cout << "\n\n\tJumlah : ";
        cout << "\nVokal : " << vokal;
        cout << "\nKonsonan : " << konsonan;
        cout << "\nKata : " << kata;
        cout << "\nKata DINUS : " << katadinus;

        getch;
    }
