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

source code guided 1

penjelasan singkat guided 1

### 2\. ...

source code guided 2

penjelasan singkat guided 2

### 3\. ...

source code guided 3

penjelasan singkat guided 3

## Unguided

### 1\. (Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.\)

#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a;
    cin >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
}

### Output Unguided 1 :

##### Output 1

\!\[Screenshot Output Unguided 3\_2\](https://github.com/migeeelll/strukturdata/blob/main/Minggu1/foto/output1soal1.png)

contoh : ![Screenshot Output Unguided 1\_1]()

##### Output 2

\!\[Screenshot Output Unguided 3\_2\](https://github.com/migeeelll/strukturdata/blob/main/Minggu1/foto/output2soal1.png)

user memasukan 2 inputan lalu inputan di simpan dan di lakukan penjumlahan pengurangan perkalian dan pembagian

### 2\. (Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100\)

#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

int main() {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    int n;
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "Input harus antara 0 dan 100" << endl;
    }else if (n == 0) {
        cout << n << " : Nol" << endl;
    } else if (n < 10) {
        cout << n << " : " << satuan[n] << endl;
    } else if (n == 10) {
        cout << n << " : sepuluh" << endl;
    } else if (n == 11) {
        cout << n << " : sebelas" << endl;
    } else if (n < 20) {
        cout << n << " : " << satuan[n % 10] << " belas" << endl;
    } else if (n < 100) {
        cout << n << " : " << satuan[n / 10] << " puluh";
            cout << " " << satuan[n % 10] << endl;
    } else {
        cout << n << " : seratus" << endl;
    }

    return 0;
}

### Output Unguided 2 :

##### Output 1

\!\[Screenshot Output Unguided 3\_2\](https://github.com/migeeelll/strukturdata/blob/main/Minggu1/foto/output1soal2.png)

##### Output 2

\!\[Screenshot Output Unguided 3\_2\](https://github.com/migeeelll/strukturdata/blob/main/Minggu1/foto/output2soal2.png)

user memasukan angka dari 0 - 100 lalu program akan merubahnya menjadi string

### 3\. (Buatlah program yang dapat memberikan input dan output sbb.\)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;

    cout << "output:" << endl;
    for (int i = n; i >= 0; i--) {
        for (int s = 0; s < n - i; s++)
            cout << "  ";
        for (int j = i; j >= 1; j--)
            cout << j << " ";
        cout << "*";
        for (int j = 1; j <= i; j++)
            cout << " " << j;
        cout << endl;
    }
    return 0;
}

### Output Unguided 3 :

##### Output 1

\!\[Screenshot Output Unguided 3\_2\](https://github.com/migeeelll/strukturdata/blob/main/Minggu1/foto/output1soal3.png)

contoh : ![Screenshot Output Unguided 3\_1]()

##### Output 2

\!\[Screenshot Output Unguided 3\_2\](https://github.com/migeeelll/strukturdata/blob/main/Minggu1/foto/output2soal3.png)

gitu

## Kesimpulan

...

## Referensi

\[1\] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.   
\[2\] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui [https://doi.org/10.21070/2020/978-623-6833-67-4](https://doi.org/10.21070/2020/978-623-6833-67-4). 

...