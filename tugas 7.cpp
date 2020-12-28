#include <iostream>
using namespace std;
main()

{
	int x = 0;
	int a, a_kurang, max_2=0;
	int max = 0, min = 0, selisih [999] = {0};
	int data[x];
	float rata2 = 0, rata = 0;
	cout<<"Masukkan banyak Angka\t: ";
	cin>> x;
	
	
	for (a=0; a<x; a++)     
	{
		cout << "Angka ke-" << a+1 << ": ";
		cin >> data[a];
	}
    cout << "  \n";
	cout << "  \n";
	cout << "###### Hasil ######\n";
	
	cout << "Deret\t\t : ";
	for (a=0; a<x; a++)
	{
	cout << data[a] << " " ;
	}
	cout << endl;
	
	max = data[0];
	for (a=0; a<x; a++)
	{
		if (data[a] > max)
		{
			max = data[a];
		}
		else 
		min = data[0];
		if(data[a] < min)
		{
			min = data[a];
		}
	}
	
	cout<<"Maksimum\t : " << max <<endl;
	cout<<"Minimum\t\t : "<< min <<endl;


	for(a=0; a<x; a++)
	{
		rata = rata + data[a];
	}
	rata2 = rata/x;
	cout<<"Rata-Rata\t : "<< rata2 <<endl;
    x = x-1;
	for (a=0; a<x; a++)
	{
		a_kurang = a+1;
	
		if (a<x)selisih[a] = data[a] - data [a_kurang];
		else selisih[a] = 0;
		
		if (selisih [a]<0) selisih[a] = selisih[a] * (-1);
		
		max_2 = selisih [0];
		if (selisih [a] > max_2)
		{
			 max_2 = selisih [a];
		}
	}
	
	cout << "Selisih Max\t : " << max_2 <<endl;
		
return 0;
}
