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