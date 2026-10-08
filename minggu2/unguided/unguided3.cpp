#include <iomanip>
#include <iostream>
using namespace std;

const int jumlah_x = 10;

int nilaiMaksimum(const int x[], int y)
{
    int maksimum = x[0];
    for (int indeks = 1; indeks < y; indeks++)
    {
        if (x[indeks] > maksimum)
        {
            maksimum = x[indeks];
        }
    }
    return maksimum;
}

int nilaiMinimum(const int x[], int y)
{
    int minimum = x[0];
    for (int indeks = 1; indeks < y; indeks++)
    {
        if (x[indeks] < minimum)
        {
            minimum = x[indeks];
        }
    }
    return minimum;
}

void hitungz(const int x[], int y, double &z)
{
    int total = 0;
    for (int indeks = 0; indeks < y; indeks++)
    {
        total += x[indeks];
    }
    z = static_cast<double>(total) / y;
}

void tampilkanArray(const int x[], int y)
{
    for (int indeks = 0; indeks < y; indeks++)
    {
        cout << x[indeks] << (indeks == y - 1 ? '\n' : ' ');
    }
}

int main()
{
    const int x[jumlah_x] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int pilihan;
    double z = 0;

    do
    {
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung nilai rata-rata\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tampilkanArray(x, jumlah_x);
            break;
        case 2:
            cout << "Nilai maksimum = " << nilaiMaksimum(x, jumlah_x) << endl;
            break;
        case 3:
            cout << "Nilai minimum = " << nilaiMinimum(x, jumlah_x) << endl;
            break;
        case 4:
            hitungz(x, jumlah_x, z);
            cout << fixed << setprecision(2);
            cout << "Nilai rata-rata = " << z << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia." << endl;
        }
    }while (pilihan >= 1 && pilihan <= 4);

    return 0;
}