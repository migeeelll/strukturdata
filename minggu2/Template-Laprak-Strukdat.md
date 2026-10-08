# **Laporan Praktikum Modul 1 \- Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)**

# 

Muhammad Dhimas Hafizh Fathurrahman \- 2311102151

## Dasar Teori

isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku \[\] untuk pernyataan yang mengambil refernsi dari jurnal). contoh : Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas\[1\]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

A. Pengenalan Bahasa C++

### 

C++ adalah bahasa pemrograman tingkat tinggi turunan dari bahasa C, dan sering dipakai untuk aplikasi tingkat lanjut serta embedded system[2]. Karena komputer hanya paham bahasa mesin, kode C++ harus diterjemahkan dulu oleh compiler. Compiler memeriksa seluruh kode, dan kalau ada error, eksekusi dihentikan lalu lokasi kesalahannya ditampilkan[2].

#### 1. IDE\. Untuk menulis, compile, dan menjalankan program, kita pakai IDE yang sudah membawa compiler di dalamnya, contohnya Dev C++[2]. Code::Blocks juga IDE C++ open source dengan fungsi serupa, jadi semua prosesnya bisa dilakukan dalam satu aplikasi.

#### 2. Struktur Dasar Program\. Program C++ minimal punya fungsi main() sebagai titik awal dan akhir eksekusi, dengan isi di dalam kurung kurawal { }[2]. Komponen umumnya:

#include <iostream> untuk input-output (cin dan cout)[2].
using namespace std; supaya compiler memakai isi namespace std[2].
// untuk komentar yang tidak dieksekusi[2].
return 0; untuk mengembalikan nilai 0 ke sistem operasi saat program selesai[2].

#### 3\. ...

B. Elemen Dasar C++

### 

#### 1. Variabel dan Konstanta\. Variabel adalah tempat di memori untuk menyimpan data yang nilainya bisa berubah selama program jalan. Konstanta nilainya tetap dan dideklarasikan dengan const[2]. Nama variabel harus diawali huruf, tanpa spasi atau karakter khusus[2]. Penulisannya tipe data dulu baru nama, misalnya int num;[2].

#### 2. Tipe Data\. Tipe data dasar yang dipakai antara lain int (bilangan bulat), float (pecahan), char (karakter), string (kumpulan karakter), dan bool (benar atau salah)[2].

#### 3. Operator dan Input-Output\. Ekspresi terdiri dari operand dan operator. Operator aritmetika yang umum adalah +, -, *, /, dan % (sisa bagi). Operator relasional seperti ==, !=, <, dan > menghasilkan nilai benar atau salah[2]. Untuk input dipakai cin >>, dan untuk output dipakai cout <<[2].

## Guided

### 1\. ...
```C++
#include <iostream>
#define MAX 5
using namespace std;
int main()
{
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] =
        {{0, 2, 2, 0, 0},
         {0, 1, 1, 1, 0},
         {0, 3, 3, 3, 0},
         {4, 4, 0, 0, 4},
         {5, 0, 0, 0, 5}};
    for (i = 0; i < MAX; i++)
    {
        cout << "masukkan nilai ke-" << i + 1 << endl;
        cin >> nilai[i];
    }
    cout << "\ndata nilai siswa :\n";
    for (i = 0; i < MAX; i++)
        cout << "nilai k-" << i + 1 << "=" << nilai[i] << endl;
    cout << "\n nilai tahunan : \n";
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
            cout << nilai_tahun[i][j];
        cout << "\n";
    }
    return 0;
}
```
penjelasan singkat guided 1

### 2\. ...
```c++
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int *px;
    x = 87;
    px = &x;
    y = *px;
    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;
    return 0;
}
```
penjelasan singkat guided 2

### 3\. ...
```c++
#include <iostream>
using namespace std;
int maks3(int a, int b, int c);
int main()
{
    int x, y, z;
    cout << "masukkan nilai bilangan ke-1 =";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2 =";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3 =";
    cin >> z;
    cout << "nilai maksimumnya adalah ="
         << maks3(x, y, z);
    return 0;
}

int maks3(int a, int b, int c)
{
    int temp_max = a;
    if (b > temp_max)
        temp_max = b;
    if (c > temp_max)
        temp_max = c;
    return (temp_max);
}
```
penjelasan singkat guided 3

### 4\. ...
```c++
#include <iostream>
using namespace std;
/*prototype fungsi */
void tulis(int x);
int main()
{
    int jum;
    cout << " jumlah baris kata =";
    cin >> jum;
    tulis(jum);
    return 0;
}
/*badan prosedur*/
void tulis(int x)
{
    for (int i = 0; i < x; i++)
        cout << "baris ke - " << i + 1 << endl;
}
```
penjelasan singkat guided 4

## Unguided

### 1\. (Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.\)
```C++
#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cout << "bil pertama = ";
    cin >> x;
    cout << "bil kedua = ";
    cin >> y;
    cout << "Hasil penjumlahan = " << x + y << endl;
    cout << "Hasil pengurangan = " << x - y << endl;
    cout << "Hasil perkalian = " << x * y << endl;
    cout << "Hasil pembagian = " << x / y << endl;
    return 0;
}
```
### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu2/output/1.1.png)

##### Output 2

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu2/output/1.2.png)


### 2\. (Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100\)
```C++
#include <iostream>
using namespace std;

void tukarValue(int a, int b, int c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

void tukarPointer(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void tukarReference(int &a, int &b, int &c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
}
int main()
{
    int a = 7, b = 8, c = 9;
    cout << "Sebelum ditukar           -> a = " << a << ", b = " << b << ", c = " << c << " (Tetap)" << endl;
    tukarPointer(&a, &b, &c);
    cout << "Setelah Call by Pointer   -> a = " << a << ", b = " << b << ", c = " << c << " (Berubah)" << endl;
    tukarReference(a, b, c);
    cout << "Setelah Call by Reference -> a = " << a << ", b = " << b << ", c = " << c << " (Berubah lagi)" << endl;
    return 0;
}
```
### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu2/output/2.1.png)

##### Output 2

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu2/output/2.2.png)



### 3\. (Buatlah program yang dapat memberikan input dan output sbb.\)
```C++
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
```
### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu2/output/3.1.png)

##### Output 2

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu2/output/3.2.png)

gitu

## Kesimpulan

...

## Referensi

\[1\] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.   
\[2\] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui [https://doi.org/10.21070/2020/978-623-6833-67-4](https://doi.org/10.21070/2020/978-623-6833-67-4). 

...