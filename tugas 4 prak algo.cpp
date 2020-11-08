#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
	int pilih,M,N,jumlah;
	cout <<"Perkalian dan Perpangkatan" << endl;
	cout <<"[1] Perkalian"    <<endl;
	cout <<"[2] perpangkatan" <<endl;
	cout <<"pilih = ";
	cin >> pilih;
	cout <<" " <<endl;
	
	switch (pilih)
	{
		case 1 :
		cout <<"masukkan nilai M   = ";
		cin >> M;
		cout <<"masukkan nilai N   = ";
		cin >> N;
		jumlah = 0;
		for (int loop = 1; loop <= N; loop++)
		{
			jumlah += M;
			if (loop != N)
			{cout << M << "+";}
			else
			{cout << M << "=" <<jumlah;}
		}
		break;
		case 2 :
		cout <<"masukkan nilai M    = ";
		cin >> M;
		cout <<"masukkan nilai N    = ";
		cin >> N;
		cout <<"\nhasil" << " " << M << "^" << N <<endl;
		jumlah = 1;
		for (int loop = 1; loop <= N; loop++)
		{
			jumlah *= M;
			if (loop != N)
			{cout << M << "x";}
			else
			{cout << setprecision (999999) << M << "=" << jumlah;}
		}
		break;
		
		default :
		cout << ("input salah|\n");
	}
			
		
		
	
	return 0;
}
