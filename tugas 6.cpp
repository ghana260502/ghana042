#include <iostream>
#include <math.h>

using namespace std;

double luas_lingkaran(double);
double keliling_lingkaran(double);
double volume_tabung(double, double);

int main()
{
    char ulang;
    int menu;
    double r, t;

    do
    {
        cout << "####### Hitung Lingkaran #######" << endl;
        cout << endl;
        cout << " 1. Luas Lingkaran" << endl;
        cout << " 2. Keliling Lingkaran" << endl;
        cout << " 3. Volume Tabung" << endl;
        cout << endl;
        cout << "Pilih: ";
        cin >> menu;
        cout << endl;

        switch(menu)
        {
            case 1:
                cout << "Jari-jari: ";
                cin >> r;
                cout << endl;
                cout << "Luas Lingkaran: " << luas_lingkaran(r) << endl;
                break;
            case 2:
                cout << "Jari-jari: ";
                cin >> r;
                cout << endl;
                cout << "Keliling Lingkaran: " << keliling_lingkaran(r) << endl;
                break;
            case 3:
                cout << "Jari-jari: ";
                cin >> r;
                cout << "Tinggi   : ";
                cin >> t;
                cout << endl;
                cout << "Volume Tabung: " << volume_tabung(r, t) << endl;
                break;
            default:
                cout << "Opsi tidak tersedia!" << endl;
        }

        cout << endl;
        cout << "Ulangi program? [y/n]: ";
        cin >> ulang;
        cout << endl;

    } while(ulang == 'Y' || ulang == 'y');

    return 0;
}

double luas_lingkaran(double r)
{
    return M_PI * r * r;
}

double keliling_lingkaran(double r)
{
    return 2 * M_PI * r;
}

double volume_tabung(double r, double t)
{
    return luas_lingkaran(r) * t;
}
