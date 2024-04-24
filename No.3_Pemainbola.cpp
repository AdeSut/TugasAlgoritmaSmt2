#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nomor, limit=100;
    string posisi;

    cout << "Pengecekan nomor punggung pemain\n";
    cout << "Masukkan nomor punggung pemain : ";
    cin >> nomor;
    while (nomor > limit) {
        cout << "Nomor punggung melebihi 100 \nSilahkan input ulang : ";
        cin >> nomor;
    }

    if (nomor % 2 == 0 && nomor <= 100)
         posisi = "Attaker";
    if (nomor % 2 == 0 && nomor >= 50 && nomor <= 100)
        posisi = "Attaker dan berhak dipilih menjadi kapten ";
    if (nomor % 2 != 0)
        posisi = "Defender";
    if (nomor % 2 != 0 && nomor > 90 && nomor <= 100)    
        posisi = "Defender dan Playmaker";    
    if ((nomor % 3 == 0 && nomor % 2 != 0 && nomor <= 100) || (nomor % 5 == 0 && nomor % 2 != 0 && nomor <= 100))   
        posisi = "Defender dan Keeper";
    if ((nomor % 3 == 0 && nomor % 2 != 0 && nomor >= 90 && nomor <= 100) || (nomor % 5 == 0 && nomor % 2 != 0 && nomor >= 90 && nomor <= 100))
        posisi = "Defender, Keeper, dan Playmaker";
 
    cout << "\nPosisi pemain adalah " << posisi << endl;

}
