#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <iomanip>


struct Aduan{
    string id, time, nama, npm, kategori, kronologi, bukti, status;
};

extern vector <Aduan> daftarAduan;
extern vector <string> dosen;
extern int counterID;
const string NAMA_FILE = "aduan.txt";
