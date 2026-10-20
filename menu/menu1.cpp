#include <iostream>
#include <string>
#include "../header.h"
using namespace std;

void inputDataPelapor(Aduan& pelapor) {
    cout << "Nama: "; 
    getline(cin, pelapor.nama);
    cout << "NPM : "; 
    getline(cin, pelapor.npm);
}

void pilihKategori(Aduan& a) {
    int pilihan;
    cout << "1. Akademik  2. Fasilitas  3. Administrasi  4. Lainnya: " << endl;
    int pilihan = bacaPilihan();
    if (pilihan == 1) {
        a.kategori = "Akademik";
    } else if (pilihan == 2) {
        a.kategori = "Fasilitas";
    } else if (pilihan == 3) {
        a.kategori = "Administrasi";
    } else if (pilihan == 4) {
        a.kategori = "Lainnya";
    } else {
        cout << "Pilihan salah" << endl;
        pilihKategori(a);
    }
}

void inputKronologi(Aduan& a){
    cout << "Kronologi: "; 
    getline(cin, a.kronologi);
}

void inputFileBukti(string& fileBukti){
    cout << "Nama file bukti: "; 
    getline(cin, fileBukti);
}

void buatAduan(){
    Aduan aduan;
    inputDataPelapor(aduan);
    pilihKategori(aduan);
    inputKronologi(aduan);
    inputFileBukti(aduan.bukti);

    if (!validasiInput(aduan)) {
        cout << "Data tidak valid, ulangi input!" << endl;
        buatAduan();                                            // REKURSIF
        return;
    }

    aduan.id     = buatID();                                    // Valid? -> Ya
    aduan.time   = buatTimestamp();
    aduan.status = "Diterima";
    daftarAduan.push_back(aduan);
    simpanKeFile();
    cout << "Aduan tersimpan dengan ID: " << aduan.id << endl;

}