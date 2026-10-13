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
#include "buku.h"

using namespace std;

int main() {
    buku novel;

    string judul, penulis;
    int halaman;

    cout << "Masukkan Judul Buku: ";
    cin >> judul;
    cout << "Masukkan Jumlah Halaman: ";
    cin >> halaman;
    cout << "Masukkan Nama Penulis: ";
    cin >> penulis;

    editIsi(judul, halaman, penulis, novel);
    tampilkanbuku(novel);

    cout << checkpenulis(novel) ;
    return 0;
}
```
penjelasan singkat guided 1


## Unguided

### 1\. (Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3 * uts+0.4 * uas+0.3 * tugas.\)
```C++
#include <iostream>
#include <string>
using namespace std;

const int MAKS = 10;

struct mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}

void inputMhs(mahasiswa &m) {
    cout << "Nama  : ";
    cin.ignore(1000, '\n');
    getline(cin, m.nama);
    cout << "NIM   : ";
    cin >> m.nim;
    cout << "UTS   : ";
    cin >> m.uts;
    cout << "UAS   : ";
    cin >> m.uas;
    cout << "Tugas : ";
    cin >> m.tugas;
    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

void tampilMhs(const mahasiswa &m) {
    cout << m.nama << "\t" << m.nim << "\t"
         << m.uts << "\t" << m.uas << "\t" << m.tugas << "\t"
         << m.nilaiAkhir << endl;
}

int main() {
    mahasiswa data[MAKS];
    int n;

    do {
        cout << "Jumlah mahasiswa (1-" << MAKS << "): ";
        cin >> n;
    } while (n < 1 || n > MAKS);

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMhs(data[i]);
    }

    cout << "\n=== DATA MAHASISWA ===" << endl;
    cout << "Nama\tNIM\tUTS\tUAS\tTugas\tAkhir" << endl;
    for (int i = 0; i < n; i++) {
        tampilMhs(data[i]);
    }
    return 0;
}
```
### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu3/output/1.1.png)

##### Output 2

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu3/output/1.2.png)


### 2\. (Buatlah ADT pelajaran sebagai berikut di dalam file “pelajaran.h”:\)
```C++
#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
```
### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu3/output/2.1.png)

##### Output 2

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu3/output/2.2.png)



### 3\. (Buatlah program dengan ketentuan : 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer, fungsi/prosedur yang menampilkan isi sebuah array integer 2D, fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu\)
```C++
#include <iostream>
using namespace std;

const int N = 3;

void tampilArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int A[N][N], int B[N][N], int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int *ptr1, *ptr2;

    cout << "Array A awal:" << endl;
    tampilArray(A);
    cout << "\nArray B awal:" << endl;
    tampilArray(B);

    int baris, kolom;
    cout << "\nMasukkan posisi yang ditukar (baris kolom, 0-2): ";
    cin >> baris >> kolom;
    if (baris < 0 || baris >= N || kolom < 0 || kolom >= N) {
        cout << "Posisi tidak valid." << endl;
        return 1;
    }
    tukarArray(A, B, baris, kolom);

    cout << "\nArray A setelah tukar posisi [" << baris << "][" << kolom << "]:" << endl;
    tampilArray(A);
    cout << "\nArray B setelah tukar posisi [" << baris << "][" << kolom << "]:" << endl;
    tampilArray(B);

    ptr1 = &A[0][0];
    ptr2 = &B[0][0];
    cout << "\nSebelum tukar pointer : *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Sesudah tukar pointer : *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    cout << "\nArray A akhir:" << endl;
    tampilArray(A);
    cout << "\nArray B akhir:" << endl;
    tampilArray(B);
    return 0;
}
```
### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu3/output/3.1.png)

##### Output 2

![Screenshot Output Unguided 3\_1](https://github.com/migeeelll/strukturdata/blob/main/minggu3/output/3.2.png)

gitu

## Kesimpulan

...

## Referensi

\[1\] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.   
\[2\] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui [https://doi.org/10.21070/2020/978-623-6833-67-4](https://doi.org/10.21070/2020/978-623-6833-67-4). 

...