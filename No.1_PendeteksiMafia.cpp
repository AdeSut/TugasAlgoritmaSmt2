#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama, tempat_tinggal, pangkat;
    int umur, tabungan;

    cout << "Nama : ";
    getline(cin, nama);

    cout << "Umur :";
    cin >> umur ;

    cin.ignore();

    cout << "Tempat Tinggal : ";
    getline(cin, tempat_tinggal);

    cout << "Uang Tabungan : $";
    cin >> tabungan;

    if ((umur >= 40) && ((tempat_tinggal == "Nevada") || (tempat_tinggal == "New York") || (tempat_tinggal == "Havana")) && (tabungan >= 10000000))
        pangkat = "Don";
    else if ((umur >= 25) && (umur <= 40) && ((tempat_tinggal == "New Jersey") || (tempat_tinggal == "Manhattan") || (tempat_tinggal == "Nevada")) && (tabungan >= 1000000) && (tabungan <= 2000000))
        pangkat = "Underboss";
    else if ((umur >= 18) && (umur <= 24) && ((tempat_tinggal == "California") || (tempat_tinggal == "Detroid") || (tempat_tinggal == "Boston")) && (tabungan <= 1000000))
        pangkat = "Capo";

    if (!pangkat.empty()) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat;
    }
    else {
        cout << nama << " tidak mencurigakan" ;
    }

    return 0;
}
