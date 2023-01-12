//judul : deteksi prodi mahasiswa melalui nim
//		: 5 oktober david s
//		: dasar pemrograman

#include <iostream>
#include <string.h>
using namespace std;

//kamus :
	char fak;
	char kodeprog[5];
	
//diskripsi :

main()
{
    cout << " deteksi prodi mahasiswa " <<endl;
    cout << " masukkan kode fakultas " ;       cin >> fak;
    cout << " masukkan kode progdi " ;         cin >> kodeprog;
    
switch(toupper(fak))
    {
        case'A':
            cout << "fasilkom";
            if(strcmp(kodeprog, "A11")==0)
            {
                cout << " FIK S1 teknik informatika ";
            }
            else if((strcmp(kodeprog, "A21")==0))
                {
                    cout << " FIK D3 manajemen informatika ";
                }
                        else
                        {
                            cout << " bukan fasilkom ";
                        }
            break;
        case'B':
            cout << "feb";
            if(strcmp(kodeprog, "B11")==0)
            {
                cout << " FEB S1 manajemen ";
            }
            else if((strcmp(kodeprog, "B21")==0))
				{
		    		cout << "FEB D3 akuntansi";
				}
				else
            		{
                	    cout << " bukan kode feb ";
            		}
            break;
        default :
            cout << "maaf fakultas tidak sesuai";
            break;
    }

return 0;
}
