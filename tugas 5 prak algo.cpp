#include <iostream>
using namespace std;
int main()

{
	int pilih;
	cout <<"Gambar bangun datar" <<endl;
	cout <<"1.Kotak bolong" <<endl;
	cout <<"2.Segitiga" <<endl;
	cout <<"Pilih :";
	cin >> pilih;
	cout <<" " <<endl;
	
	switch (pilih)
	
	{
		case 1 :
		int p, l;
		cout <<"panjang  :";
		cin >> p;
		cout <<"lebar  :";
		cin >> l;
		
		for (int j = 1; j <= l; j++)
		{
			for (int i = 1; i <= p; i++)
			{
				if (i == 1 || i == p || j == 1 || j == l)
				{cout <<" *";}
				else
				{cout <<" ";}
			}
			cout <<" " <<endl;
		}
		break;
		
		case 2 :
		int a,b,tinggi,bilangan;
		cout << "\nTinggi : ";
		cin >> tinggi;
		
		for (a = 1; a <= tinggi; a++)
		{bilangan = a;
			for (b = 1; b <= a; b++)
			 {cout << " " << bilangan;
				bilangan = bilangan + tinggi - b;}
	         cout << "\n";
		 }
		 break;
	 }

		
		
			
		
	return 0;

}

