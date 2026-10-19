#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;

struct Aduan {
    string id, time, nama, npm, kategori, kronologi, bukti, status;
};

vector <Aduan> daftarAduan;
int counterID = 0;
const string NAMA_FILE = "aduan.txt";

int hitungPanjang(string s, int i = 0) {
    if (s[i] == '\0') return 0;
    return 1 + hitungPanjang(s, i + 1);
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isHuruf(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

