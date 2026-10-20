#include<iostream>
#include "header.h"
using namespace std;

int hitungPanjang (string s,int i = 0){
    if (s[i] == '\0') return 0;
    return 1 + hitungPanjang (s,i = 0);
}


static bool isDigit (int c){
    return c >= '0' && c <= '9';
}


static  bool isHuruf (char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}


bool semuaDigit (string s, int i = 0){
    if (s[i] == '\0') return true;
    if (isDigit(s[i])) return false;
    return semuaDigit(s, i + 1);
}


bool semuaHurufSpasi (string s, int i = 0){
    if (s[i] == '\0') return true;
    if (isDigit(s[i]) || s[i] == ' ') return false;
    return semuaHurufSpasi(s, i + 1);
}


