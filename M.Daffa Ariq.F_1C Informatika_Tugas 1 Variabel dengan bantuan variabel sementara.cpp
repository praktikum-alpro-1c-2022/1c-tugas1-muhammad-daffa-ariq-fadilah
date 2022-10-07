#include <iostream>
using namespace std;


int main(){
    //  Tugas 2
    //  Menukarkan 2 Variabel dengan bantuan Variabel Sementara
    int x, y, z;
    x = 69; //Variabel awal
    y = 420; //Variabel awal

    z = x; // Variabel z ditukar dengan Variabel x yang bernilai 69
    x = y; // Variabel x ditukar dengan Variabel y yang bernilai 420
    y = z; // Variabel y ditukar dengan Variabel z yang bernilai 69

    cout << "Menukarkan 2 Variabel dengan bantuan Variabel Sementara\n";
    cout << "x : " << x << endl << "Y : " << y << endl;
    return 0;
}
