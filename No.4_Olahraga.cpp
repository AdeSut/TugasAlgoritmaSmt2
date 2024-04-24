#include <iostream>
#include <string>
using namespace std;

int main()
{
    int lari,lari2, pushup, pushup2, plank, plank2, waktu, total;



    cout << "Penghitung Pembakaran Jumlah Kalori\n\n";
    cout << "Melakukan Olahraga lari sebanyak : ";
    cin >> lari;
    cout << "Melakukan Olahraga push up sebanyak : ";
    cin >> pushup;
    cout << "Melakukan Olahraga plank sebanyak : ";
    cin >> plank;

    lari2 = 60 * lari;
    pushup2 = 200 * pushup;
    plank2 = 5 * plank;
    total = lari2 + pushup2 + plank2;

    cout << "Hasil Pembakaran Kalori Setelah Olahraga\n\n";
    
    cout << "Kalori Olahraga lari : " << lari2 << " Kalori" << endl;
    cout << "Kalori Olahraga push up : " << pushup2 << " Kalori" << endl;
    cout << "Kalori Olahraga plank : " << plank2 << " Kalori" << endl;
    cout << "Jumlah total Kalori : " << total << " Kalori" << endl;


}
