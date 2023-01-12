//judul : pendapat ahli tentang penyakit pada usus dan gejalanya
//	david sugiarto
//	29 sept 2022
//	dasar pemrograman

//memo : Gejala dari penyakit dapat bervariasi dan tergantung pada derajat keparahan gejala yang terjadi
//		 Dokter akan mendiagnosis penyakit setelah mengesampingkan kemungkinan penyebab lainnya berdasarkan gejala yang dialami pengidapnya.
//		 Untuk membantu memastikan diagnosis penyakit, pengidap mungkin memerlukan serangkaian kombinasi tes.

#include <iostream>
#include <string.h>
using namespace std;

//kamus : 
	char gejala;
    char penyakit[5];
    char yt;

//diskripsi :

main()
{
awal:
	cout << " !_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_! " << endl;
	cout << " =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= " << endl;
	cout << " ==========> Deteksi Penyakit Melalui Gejala <========== " << endl;
	cout << " =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= " << endl;
	cout << " !_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_!_! " << endl;
	cout << endl;
	
	cout << " Daftar gejala umum dan penyakit beserta kodenya = " << endl;
	cout << endl;
	
	cout << " A = sakit dan nyeri pada perut bagian atas " << endl;
	cout << " --> kode penyakit = A1 , A2 , A3 , A4 , A5 " << endl;
	cout << " B = sakit dan nyeri pada pada pinggang bagian belakang " << endl;
	cout << " --> kode penyakit = B1 , B2 , B3 , B4 , B5 " << endl;
	cout << " C = sakit dan nyeri pada perut bagian bawah " << endl;
	cout << " --> kode penyakit = C1 , C2 , C3 , C4 , C5 " << endl;
	cout << endl;
	
	cout << " masukkan kode gejala :	"; 			cin >> gejala ;
	cout << " masukkan kode penyakit : ";			cin >> penyakit ;
	cout << endl;
	
	switch(toupper(gejala))
    	{
        case'A':
            cout << " Sakit pada lambung " << endl;
			if(strcmp(penyakit, "A1")==0)
            {
                cout << " Gastroesophageal Reflux Disease atau maag " << endl;
				cout << " peradangan pada lambung " << endl;
				cout << " gejalanya adalah munculnya rasa asam atau pahit pada mulut dan sensasi terbakar di dada, mengalami mual, muntah, sakit tenggorokan, dan sulit tidur " << endl;
            }
            else if((strcmp(penyakit, "A2")==0))
        		{
            		cout << " gastritis " << endl;
		    		cout << " kondisi di mana makanan atau minuman yang telah bercampur dengan asam lambung kembali naik ke kerongkongan " << endl;
		    		cout << " gejala khusus adalah penderita gastritis mengalami muntah, mual, cegukan, nyeri pada ulu hati, hingga buang air besar dengan tinja berwarna hitam " << endl;
                }
                else if((strcmp(penyakit, "A3")==0))
                    {
                        cout << " tukak lambung " << endl;
						cout << " luka akibat pengikisan pada dinding lambung atau usus halus " << endl;
						cout << " gejalanya adalah adalah perut kembung, mual, sering sendawa, nyeri ulu hati, bahkan muntah darah " << endl;
                    }
                    else if((strcmp(penyakit, "A4")==0))
                        {
                            cout << " Gastroparesis " << endl;
			    			cout << " terjadi akibat rusaknya saraf yang mengontrol otot lambung mengakibatkan otot lambung tidak dapat bekerja dengan maksimal, sehingga proses pencernaan makanan pun menjadi lambat " << endl;
			    			cout << " gejalanya adalah mulai dari cepat merasa kenyang saat makan, perut kembung, mual, nyeri ulu hati, hingga memuntahkan makanan yang belum tercerna sempurna " << endl;
                        }
                        else if((strcmp(penyakit, "A5")==0))
			    			{
								cout << " kanker lambung " << endl;
								cout << " akibatnya belum diketahui pasti dan gejalanya adalah perut kembung, mual, muntah darah, dan nyeri ulu hati "<< endl;
			    			}
			     			else
            				{
                		    	cout << " input kode salah " << endl;
                		    	cout << " ulangi input kode " << endl;
            				}
            				break;
        case'B':
            cout << " sakit pada ginjal " << endl;
            if(strcmp(penyakit, "B1")==0)
            {
                cout << " Infeksi ginjal atau pyelonephritis " << endl;
				cout << " terjadi akibat bakteri yang berpindah dari kandung kemih atau saluran kemih ,terjadi akibat infeksi saluran kemih yang tidak segera diobati atau adanya sumbatan pada saluran kemih, sehingga aliran urine terhambat " << endl;
				cout << " gejalanya adalah berupa sakit pinggang atau punggung, demam, mual, lemas, nyeri saat buang air kecil, dan ada darah atau nanah dalam urine " << endl;
            }
            else if(strcmp(penyakit, "B2")==0)
            	{
                	cout << " batu ginjal " << endl;
		    		cout << " zat tertentu di dalam ginjal menumpuk, mengendap, dan membentuk gumpalan keras menyerupai batu di dalam saluran pada ginjal " << endl;
		    		cout << " gejalanya adalah nyeri saat buang air kecil dan urine berwarna seperti teh atau darah " << endl;
            	}
		 		else if(strcmp(penyakit, "B3")==0)
					{
						cout << " gagal ginjal akut" << endl;
						cout << " kondisi ketika ginjal tidak dapat berfungsi normal secara tiba-tiba " << endl;
						cout << " gejalanya adalah pembengkakan pada tungkai dan kaki, lemas, menjadi lebih jarang pipis, sesak napas, penurunan kesadaran atau pingsan, hingga kejang " << endl;
					}
					else if(strcmp(penyakit, "B4")==0)
						{
							cout << " gagal ginjal kronis " << endl;
							cout << " penurunan fungsi ginjal yang berlangsung selama lebih dari 3 bulan disebabkan oleh gagal ginjal akut yang tidak ditanggani " << endl;
							cout << " gejalanya adalah pembengkakan di kaki, lemas, pucat, nafsu makan hilang, mual, gatal-gatal, kram otot, sulit tidur, dan sesak napas " << endl;
						}
						else if(strcmp(penyakit, "B5")==0)
							{
								cout << " Sindrom nefrotik " << endl;
								cout << " ada kebocoran pada glomerulus, sehingga terdapat banyak protein pada urine " << endl;
								cout << " gejalanya adalah urine berbusa, edema di mata, kaki, dan lengan, serta kehilangan nafsu makan " << endl;
							}
							else
							{
								cout << " input kode salah " << endl;
								cout << " ulangi input kode " << endl;
							}
							break;
        case'C':
            cout << " sakit pada usus " << endl;
            if(strcmp(penyakit, "C1")==0)
            {
                cout << " gastroenteritis atau infeksi usus " << endl;
                cout << " infeksi yang terjadi pada usus atau perut yang disebabkan oleh beberapa jenis virus " << endl;
                cout << " gejalanya adalah mual, muntah, diare, kram perut, dan terkadang demam " << endl;
            }
            else if(strcmp(penyakit, "C2")==0)
            	{
            		cout << " appendisitis atau usus buntu " << endl;
					cout << " peradangan pada apendiks vermiformis (umbai cacing / usus buntu) disebabkan Adanya penyumbatan yang terjadi di lapisan usus buntu sehingga bakteri dapat berkembang biak dengan cepat yang akhirnya menyebabkan apendiks menjadi meradang, bengkak, dan penuh nanah" << endl;
					cout << " gejala utama penyakit usus buntu adalah nyeri di perut yang disebut kolik abdomen " << endl;
				}
				else if(strcmp(penyakit, "C3")==0)
					{
					cout << " obstruksi usus " << endl;
					cout << " penyumbatan di usus, baik usus halus maupun usus besar. Kondisi ini dapat menyebabkan masalah pada saluran pencernaan, seperti gangguan proses penyerapan makanan atau cairan, serta gangguan pembuangan sisa pencernaan " << endl;
					cout << " gejalanya adalah Kehilangan selera makan, gangguan pencernaan, mual, muntah, pembengkakan perut, demam ringan " << endl;
					}
					else if(strcmp(penyakit, "C4")==0)
						{	
						cout << " iskemia usus atau vaskular mesentrika" << endl;
						cout << " cedera pada pembuluh darah atau arteri yang berada di usus kecil, yang dapat menyebabkan terhambatnya aliran darah ke organ tersebut " << endl;
						cout << " gejalanya adalah perut kembung, muntah, konstipasi, serta nyeri pada perut " << endl;
						}
						else if(strcmp(penyakit, "C5")==0)
							{
							cout << " ulkus duodenum " << endl;
							cout << " luka terbuka di dinding usus dua belas jari, yaitu bagian awal dari usus halus " << endl;
							cout << " gejalanya adalah nyeri ulu hati terutama saat perut kosong, dada terasa panas, mual muntah, perut kembung, nafsu makan menurun, lemas, sulit menarik napas " << endl;
							}
							else
							{
                				cout << " input kode salah " << endl;
                				cout << " ulangi input kode " << endl;
            				}
							break;
        	default :
            	cout << " input kode salah " << endl;
            	cout << " ulangi input kode " << endl;
            break;
    	}
    	cout << endl;
    	
    	cout << " =-=-=-> Semoga Lekas Sembuh <-=-=-= " << endl;
    	cout << " =-=-=-=-=-> Terima Kasih <-=-=-=-=-= " << endl;
    	cout << endl;
    	
    	cout << " apakah anda ingin mengulang input?ketik (y/t) ";		cin >> yt;
    	cout << endl;
    	
    	if(yt=='Y'||yt=='y')
    	{
    		goto awal;
		}
		
	//---------------------------------
	
		if(yt=='T'||yt=='t')
		{
			goto akhir;
		}
	akhir:
		
	return 0;
}

