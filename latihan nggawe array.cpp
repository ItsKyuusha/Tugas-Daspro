//judul	: latihan nggawe array
//		: david sugiarto
//		: dasar pemrograman

//#include <iostream>
//using namespace std;

//kamus
	//int beratBadaneKoncoku[5];
	
//diskripsi

//main()
//{
//	cout <<" daftar berat badan koncoku " << endl;
//	cout <<" ============================== " << endl;
//	cin >> beratBadaneKoncoku[1];
//	cin >> beratBadaneKoncoku[2];
//	cin >> beratBadaneKoncoku[3];
//	cin >> beratBadaneKoncoku[4];
	
//	cout <<" berikut hasil isian berat badan dengan array " << endl;
//	cout <<" ========================================== " << endl;

//	cout << beratBadaneKoncoku[1];
//	cout << beratBadaneKoncoku[2];
//	cout << beratBadaneKoncoku[3];
//	cout << beratBadaneKoncoku[4];

//return 0;	
	
//}

//===========================================================================

//judul : array 2
//		: david s

//#include <iostream>
//using namespace std;
//kamus
//	int boots[5];
//	int P,PPQ;
//diskripsi

//{
//		cout <<" mendata nomor sepatu teman2ku " << endl;
//	P = 1;
//	while(P<5)
//	{
//		cin >> boots[P];
//	P = P + 1;
//	}
//	PPQ = 1;
//	do
//	{
//	cout << boots[PPQ];
//	PPQ = PPQ + 1;
//	}while(PPQ<5);
	
//}

//=============================================================================

//judul : array 3
//		: david s

//#include <iostream>
//using namespace std;

//kamus
//	int tempe, tahu, Boots[4];
//diskrpsi

//main()
//{
//	cout << "MASUKAN NOMOR SEPATU KANCA KANCAKU !" << endl;
//	tahu = 0;
// 	while(tahu <4)
// 	{
// 	cin >> Boots[0];
//	tahu = tahu +1;
// 	}
// 		cout << "berikut hasil isian nomor sepatu dengan array loop" << endl;
// 	tempe = 0;
// 	do
// 	{
// 	cout << Boots[0] ;
// 	tempe = tempe + 1;
// 	}
//	while(tempe < 4);
// 	
//	 return 0;
	
//}

//=============================================================================================

//judul : Mendata 40 nomor sepatu dengan menggunakan ARRAY
//		: david s

#include <iostream>
using namespace std;

//kamus
	int Cepatu[40];
	int Boots[40];
	int K, M;

//diskripsi

main()
{
	cout <<" mendata nomor sepatu teman2ku " << endl;
	K = 1;
	while(K<41)
	{
		cin >> Cepatu[K];
	K = K + 1;
	}
	M = 1;
	do
	{
		cout << Boots[M];
		M = M + 1;
	}while(M<41);
	
	return 0;
}