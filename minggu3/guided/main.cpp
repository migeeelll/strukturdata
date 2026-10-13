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