//judul : simulasi fakultas dan prodi
//	: 28 sept david s d2g

#include <iostream>
#include <string.h>
using namespace std;

//kamus :
	char Fak;
    char kodeprog[5];
//diskripsi :

main()
{
    cout << " ajar switch case fakultas prodi " <<endl;
    cout << " masukkan kode fakultas " ;       cin >> Fak;
    cout << " masukkan kode progdi " ;         cin >> kodeprog;
    switch(toupper(Fak))
    {
        case'A':
            cout << "fasilkom";
            if(strcmp(kodeprog, "A11")==0)
            {
                cout << " teknik informatika ";
            }
            else if((strcmp(kodeprog, "A12")==0))
                {
                    cout << " sistem informasi ";
                }
                else if((strcmp(kodeprog, "A14")==0))
                    {
                        cout << " ilmu komunikasi ";
                    }
                    else if((strcmp(kodeprog, "A15")==0))
                        {
                            cout << " desain komunikasi visual ";
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
                cout << " manajemen ";
            }
            else
            {
                cout << " bukan kode feb ";
            }
            break;
        case'C':
            cout << "fib";
            if(strcmp(kodeprog, "C11")==0)
            {
                cout << " bahasa inggris ";
            }
            else
            {
                cout << " bukan kode fib ";
            }
            break;
        default :
            cout << "maaf fakultas tidak sesuai";
            break;
    }

return 0;
}
