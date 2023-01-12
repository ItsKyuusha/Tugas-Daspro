//judul : pendapat ahli tentang penyakit pada usus dan gejalanya
//		  david sugiarto
//		  29 sept 2022
//		  dasar pemrograman

//memo :  Gejala dari penyakit pada usus dapat bervariasi dan tergantung pada derajat keparahan radang yang terjadi
//		  Dokter akan mendiagnosis penyakit pada usus setelah mengesampingkan kemungkinan penyebab lainnya berdasarkan gejala yang  dialami pengidapnya.
//		  Untuk membantu memastikan diagnosis penyakit pada usus, pengidap mungkin memerlukan serangkaian kombinasi tes.
//		  Gejala umum : Diare, Demam dan rasa tidak enak badan, Nyeri perut dan kram perut.
//		  Gejala khusus : Terdapat darah pada tinja, Berat badan turun tanpa direncanakan

#include <iostream>
#include <string.h>
using namespace std;

//kamus :
		char penyakit;
		char gejala[5];

//diskripsi :

main()
{
	cout << " ==========Penyakit pada usus dan gejalanya========== " << endl;
	cout << " ==================================================== " << endl;
	cout << " masukkan penyakit : ";		cin >> penyakit ;
	cout << " masukkan gejala :	";	 		cin >> gejala ;
	switch (penyakit)
    	{
        case'A':
            cout << " diare ";
            if(strcmp(gejala, "A1")==0)
            {
                cout << " berak terus menerus ";
            }
            else
            {
                cout << " bukan diare ";
            }
            break;
        case'B':
            cout << " radang ";
            if(strcmp(gejala, "B1")==0)
            {
                cout << " nyeri pada perut ";
            }
            else
            {
                cout << " bukan radang usus ";
            }
            break;
        case'C':
            cout << "gastritis";
            if(strcmp(gejala, "C1")==0)
            {
                cout << " muntah dan feses berwarna kehitaman ";
            }
            else
            {
                cout << " bukan gastritis ";
            }
            break;
        default :
            cout << "kemungkinan penyakit lain";
            break;
    	}
	return 0;
}

