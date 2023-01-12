//judul : membuat inputan KRS
//		: David Sugiarto
//		: Dasar Pemrograman
//		: 10 Oktober 2022

#include <iostream>
#include <conio.h>
#include <sstream>
using namespace std;
	
// kamus : 
	string nim,nama,kelp,waldos,ws;
	string mk1,mk2,mk3,mk4,mk5,mk6,mk7;
    string jadwal1,jadwal2,jadwal3,jadwal4,jadwal5,jadwal6,jadwal7;
    string ruang1,ruang2,ruang3,ruang4,ruang5,ruang6,ruang7;
	string sks1,sks2,sks3,sks4,sks5,sks6,sks7;
	int Sks1,Sks2,Sks3,Sks4,Sks5,Sks6,Sks7,totSks;
	int n_mid1,n_mid2,n_mid3,n_mid4,n_mid5,n_mid6,n_mid7;
	int n_uas1,n_uas2,n_uas3,n_uas4,n_uas5,n_uas6,n_uas7;
	int n_tugas1,n_tugas2,n_tugas3,n_tugas4,n_tugas5,n_tugas6,n_tugas7;
	float totNilai1,totNilai2,totNilai3,totNilai4,totNilai5,totNilai6,totNilai7,ips;
	char yt;
int main()
{
 awal1:
 	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "\t\t Kartu Rencana Studi" << endl;
    cout << "\t Program Studi Teknik Informatika" << endl;
    cout << "\t     Universitas Dian Nuswantoro" << endl;
    cout << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout <<"Nama		: ";				getline(cin,nama);
    cout <<"NIM		: ";					getline(cin,nim);
    cout <<"Kelp 		: ";				getline(cin,kelp);
    cout <<"Dosen Wali 	: ";				getline(cin,waldos);
    cout << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    
    cout <<"Mata Kuliah 1	: ";		getline(cin,mk1);
	cout <<"SKS		: ";				getline(cin,sks1);
	 int sks_s1 = stoi(sks1);
	cout <<"Jadwal		: ";			getline(cin,jadwal1);
	cout <<"Ruang		: ";			getline(cin,ruang1);
	cout << endl;
	
	cout <<"Mata Kuliah 2	: ";		getline(cin,mk2);
	cout <<"SKS		: ";				getline(cin,sks2);
	 int sks_s2 = stoi(sks2);
	cout <<"Jadwal		: ";			getline(cin,jadwal2);
	cout <<"Ruang		: ";			getline(cin,ruang2);
	cout << endl;
	
	cout <<"Mata Kuliah 3	: ";		getline(cin,mk3);
	cout <<"SKS		: ";				getline(cin,sks3);
	 int sks_s3 = stoi(sks3);
	cout <<"Jadwal		: ";			getline(cin,jadwal3);
	cout <<"Ruang		: ";			getline(cin,ruang3);
	cout << endl;
	
	cout <<"Mata Kuliah 4	: ";		getline(cin,mk4);
	cout <<"SKS		: ";				getline(cin,sks4);
	 int sks_s4 = stoi(sks4);
	cout <<"Jadwal		: ";			getline(cin,jadwal4);
	cout <<"Ruang		: ";			getline(cin,ruang4);
	cout << endl;
	
	cout <<"Mata Kuliah 5	: ";		getline(cin,mk5);
	cout <<"SKS		: ";				getline(cin,sks5);
	 int sks_s5 = stoi(sks5);
	cout <<"Jadwal		: ";			getline(cin,jadwal5);
    cout <<"Ruang		: ";			getline(cin,ruang5);
    cout << endl;
    
	cout <<"Mata Kuliah 6	: ";		getline(cin,mk6);
	cout <<"SKS		: ";				getline(cin,sks6);
	 int sks_s6 = stoi(sks6);
	cout <<"Jadwal		: ";			getline(cin,jadwal6);
	cout <<"Ruang		: ";			getline(cin,ruang6);
    cout << endl;
	cout <<"Mata Kuliah 7	: ";		getline(cin,mk7);
    
	cout <<"SKS		: ";				getline(cin,sks7);
	 int sks_s7 = stoi(sks7);
	cout <<"Jadwal		: ";			getline(cin,jadwal7);
	cout <<"Ruang		: ";			getline(cin,ruang7);
    
    cout << endl;
	
	
		
	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
     
    cout << endl;
    cout << " apakah anda ingin mengulang input KRS?ketik (y/t) ";		cin >> yt;
    	cout << endl;
    	
    	if(yt=='Y'||yt=='y')
    	{
    		goto awal1;
		}
		
	//----------------------------------
	
		if(yt=='T'||yt=='t')
		{
			goto akhir1;
		}
	akhir1:
	
	cout << endl;
	
	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
     
    cout <<"!=-=-=-=-=-=-=-=-=-=->> INPUT KHS <<-=-=-=-=-=-=-=-=-=-=!" << endl;

    cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";

	cout << endl;
	
 awal2:
	
	cout << "\t\t Kartu Hasil Studi" << endl;
    cout << "\t Program Studi Teknik Informatika" << endl;
    cout << "\t     Universitas Dian Nuswantoro" << endl;
    cout << endl;
	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	
	cout <<" NAMA			: " << nama << endl;
    cout <<" NIM			: " << nim << endl;
    cout <<" Kelp 			: " << kelp << endl;
    cout <<" Dosen Wali		: " << waldos << endl;
	                       	
	cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	
		cout <<" NAMA MATA KULIAH			SKS   N.Mid   N.UAS   N.Tugas " << endl;
		cout << endl;
	
		cout << mk1;				cin >> Sks1;	cin >> n_mid1;	cin >> n_uas1;	cin >> n_tugas1;
		cout << mk2;				cin >> Sks2;	cin >> n_mid2;	cin >> n_uas2;	cin >> n_tugas2;
		cout << mk3;				cin >> Sks3;	cin >> n_mid3;	cin >> n_uas3;	cin >> n_tugas3;
		cout << mk4;				cin >> Sks4;	cin >> n_mid4;	cin >> n_uas4;	cin >> n_tugas4;
		cout << mk5;				cin >> Sks5;	cin >> n_mid5;	cin >> n_uas5;	cin >> n_tugas5;
		cout << mk6;				cin >> Sks6;	cin >> n_mid6;	cin >> n_uas6;	cin >> n_tugas6;
		cout << mk7;				cin >> Sks7;	cin >> n_mid7;	cin >> n_uas7;	cin >> n_tugas7;
		cout << endl;                
		                             
		totSks = (Sks1 + Sks2 + Sks3 + Sks6 + Sks7);
		cout <<" Total SKS adalah = " << totSks << endl;
		
		totNilai1 = (n_mid1 * 30/100) + (n_uas1 * 30/100) + (n_tugas1 * 40/100);
		cout <<" Total Nilai " << mk1 << " adalah = " << totNilai1 << endl;
			if(totNilai1>=85||totNilai1<100)
			{
				cout << " Range Nilai " << mk1 << " adalah = A " << endl;
			}
			else if(totNilai1>=80||totNilai1<85)
				{
					cout << " Range Nilai " << mk1 << " adalah = AB " << endl;
				}
				else if(totNilai1>=70||totNilai1<80)
					{
						cout << " Range Nilai " << mk1 << " adalah = B " << endl;
					}
					else if(totNilai1>=65||totNilai1<70)
						{
							cout << " Range Nilai " << mk1 << " adalah = BC " << endl;
						}
						else if(totNilai1>=60||totNilai1<65)
							{
								cout << " Range Nilai " << mk1 << " adalah = C " << endl;
							}
							else if(totNilai1>=50||totNilai1<60)
								{
									cout << " Range Nilai " << mk1 << " adalah = D " << endl;
								}
								else if(totNilai1>=0||totNilai1<50)
									{
										cout << " Range Nilai " << mk1 << " adalah = D " << endl;
									}
									else
									{
										cout << endl;
									}
		
		totNilai2 = (n_mid2 * 30/100) + (n_uas2 * 30/100) + (n_tugas2 * 40/100);
		cout <<" Total Nilai " << mk2 << " adalah = " << totNilai2 << endl;
			if(totNilai2>=85||totNilai2<100)
			{
				cout << " Range Nilai " << mk2 << " adalah = A " << endl;
			}
			else if(totNilai2>=80||totNilai2<85)
				{
					cout << " Range Nilai " << mk2 << " adalah = AB " << endl;
				}
				else if(totNilai2>=70||totNilai2<80)
					{
						cout << " Range Nilai " << mk2 << " adalah = B " << endl;
					}
					else if(totNilai2>=65||totNilai2<70)
						{
							cout << " Range Nilai " << mk2 << " adalah = BC " << endl;
						}
						else if(totNilai2>=60||totNilai2<65)
							{
								cout << " Range Nilai " << mk2 << " adalah = C " << endl;
							}
							else if(totNilai2>=50||totNilai2<60)
								{
									cout << " Range Nilai " << mk2 << " adalah = D " << endl;
								}
								else if(totNilai2>=0||totNilai2<50)
									{
										cout << " Range Nilai " << mk2 << " adalah = D " << endl;
									}
									else
									{
										cout << endl;
									}
		
		totNilai3 = (n_mid3 * 30/100) + (n_uas3 * 30/100) + (n_tugas3 * 40/100);
		cout <<" Total Nilai " << mk3 << " adalah = " << totNilai3 << endl;
			if(totNilai3>=85||totNilai3<100)
			{
				cout << " Range Nilai " << mk3 << " adalah = A " << endl;
			}
			else if(totNilai3>=80||totNilai3<85)
				{
					cout << " Range Nilai " << mk3 << " adalah = AB " << endl;
				}
				else if(totNilai3>=70||totNilai3<80)
					{
						cout << " Range Nilai " << mk3 << " adalah = B " << endl;
					}
					else if(totNilai3>=65||totNilai3<70)
						{
							cout << " Range Nilai " << mk3 << " adalah = BC " << endl;
						}
						else if(totNilai3>=60||totNilai3<65)
							{
								cout << " Range Nilai " << mk3 << " adalah = C " << endl;
							}
							else if(totNilai3>=50||totNilai3<60)
								{
									cout << " Range Nilai " << mk3 << " adalah = D " << endl;
								}
								else if(totNilai3>=0||totNilai3<50)
									{
										cout << " Range Nilai " << mk3 << " adalah = D " << endl;
									}
									else
									{
										cout << endl;
									}
									
		totNilai4 = (n_mid4 * 30/100) + (n_uas4 * 30/100) + (n_tugas4 * 40/100);
		cout <<" Total Nilai " << mk4 << " adalah = " << totNilai4 << endl;
			if(totNilai4>=85||totNilai4<100)
			{
				cout << " Range Nilai " << mk4 << " adalah = A " << endl;
			}
			else if(totNilai4>=80||totNilai4<85)
				{
					cout << " Range Nilai " << mk4 << " adalah = AB " << endl;
				}
				else if(totNilai4>=70||totNilai4<80)
					{
						cout << " Range Nilai " << mk4 << " adalah = B " << endl;
					}
					else if(totNilai4>=65||totNilai4<70)
						{
							cout << " Range Nilai " << mk4 << " adalah = BC " << endl;
						}
						else if(totNilai4>=60||totNilai4<65)
							{
								cout << " Range Nilai " << mk4 << " adalah = C " << endl;
							}
							else if(totNilai4>=50||totNilai4<60)
								{
									cout << " Range Nilai " << mk4 << " adalah = D " << endl;
								}
								else if(totNilai4>=0||totNilai4<50)
									{
										cout << " Range Nilai " << mk4 << " adalah = D " << endl;
									}
									else
									{
										cout << endl;
									}
		
		totNilai5 = (n_mid5 * 30/100) + (n_uas5 * 30/100) + (n_tugas5 * 40/100);
		cout <<" Total Nilai " << mk5 << " adalah = " << totNilai5 << endl;
			if(totNilai5>=85||totNilai5<100)
			{
				cout << " Range Nilai " << mk5 << " adalah = A " << endl;
			}
			else if(totNilai5>=80||totNilai5<85)
				{
					cout << " Range Nilai " << mk5 << " adalah = AB " << endl;
				}
				else if(totNilai5>=70||totNilai5<80)
					{
						cout << " Range Nilai " << mk5 << " adalah = B " << endl;
					}
					else if(totNilai5>=65||totNilai5<70)
						{
							cout << " Range Nilai " << mk5 << " adalah = BC " << endl;
						}
						else if(totNilai5>=60||totNilai5<65)
							{
								cout << " Range Nilai " << mk5 << " adalah = C " << endl;
							}
							else if(totNilai5>=50||totNilai5<60)
								{
									cout << " Range Nilai " << mk5 << " adalah = D " << endl;
								}
								else if(totNilai5>=0||totNilai5<50)
									{
										cout << " Range Nilai " << mk5 << " adalah = D " << endl;
									}
									else
									{
										cout << endl;
									}
									
		totNilai6 = (n_mid6 * 30/100) + (n_uas6 * 30/100) + (n_tugas6 * 40/100);
		cout <<" Total Nilai " << mk6 << " adalah = " << totNilai6 << endl;
			if(totNilai6>=85||totNilai6<100)
			{
				cout << " Range Nilai " << mk6 << " adalah = A " << endl;
			}
			else if(totNilai6>=80||totNilai6<85)
				{
					cout << " Range Nilai " << mk6 << " adalah = AB " << endl;
				}
				else if(totNilai6>=70||totNilai6<80)
					{
						cout << " Range Nilai " << mk6 << " adalah = B " << endl;
					}
					else if(totNilai6>=65||totNilai6<70)
						{
							cout << " Range Nilai " << mk6 << " adalah = BC " << endl;
						}
						else if(totNilai6>=60||totNilai6<65)
							{
								cout << " Range Nilai " << mk6 << " adalah = C " << endl;
							}
							else if(totNilai6>=50||totNilai6<60)
								{
									cout << " Range Nilai " << mk6 << " adalah = D " << endl;
								}
								else if(totNilai6>=0||totNilai6<50)
									{
										cout << " Range Nilai " << mk6 << " adalah = D " << endl;
									}
									else
									{
										cout << endl;
									}
									
		totNilai7 = (n_mid7 * 30/100) + (n_uas7 * 30/100) + (n_tugas7 * 40/100);
		cout <<" Total Nilai " << mk7 << " adalah = " << totNilai7 << endl;
			if(totNilai7>=85||totNilai7<100)
			{
				cout << " Range Nilai " << mk7 << " adalah = A " << endl;
			}
			else if(totNilai7>=80||totNilai7<85)
				{
					cout << " Range Nilai " << mk7 << " adalah = AB " << endl;
				}
				else if(totNilai7>=70||totNilai7<80)
					{
						cout << " Range Nilai " << mk7 << " adalah = B " << endl;
					}
					else if(totNilai7>=65||totNilai7<70)
						{
							cout << " Range Nilai " << mk7 << " adalah = BC " << endl;
						}
						else if(totNilai7>=60||totNilai7<65)
							{
								cout << " Range Nilai " << mk7 << " adalah = C " << endl;
							}
							else if(totNilai7>=50||totNilai7<60)
								{
									cout << " Range Nilai " << mk7 << " adalah = D " << endl;
								}
								else if(totNilai7>=0||totNilai7<50)
									{
										cout << " Range Nilai " << mk7 << " adalah = D " << endl;
									}
									else
									{
										cout << endl;
									}
									
		ips = (totNilai1 + totNilai2 + totNilai3 + totNilai4 + totNilai5 + totNilai6 + totNilai7) / totSks;
		cout <<" IPS Semester Ini adalah = " << ips << endl;
		
		  
		           
		cout << endl;
		                                                                                                    
		cout << " apakah anda ingin mengulang input KHS?ketik (y/t) ";		cin >> yt;
    	cout << endl;
    	
    	if(yt=='Y'||yt=='y')
    	{
    		goto awal2;
		}
		
	//----------------------------------
	
		if(yt=='T'||yt=='t')
		{
			goto akhir2;
		}
	akhir2:
	
	cout << endl;
		
		cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
		cout <<"=-=-=-=-=-=-=-=-=-=->> Terima Kasih <<-=-=-=-=-=-=-=-=-=-=" << endl;
		cout <<"!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!-=!" << endl;

return 0;
}