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