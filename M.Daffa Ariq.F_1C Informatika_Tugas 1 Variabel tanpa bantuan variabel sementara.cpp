#include <iostream>
using namespace std;

int main (){
// Tugas 3
//  Menukarkan 2 Variabel tanpa Variabel Sementara
    int t, s;
    t = 9; //Variabel awal
    s = 6; //Variabel awal

    t = t+s; //15
    s = t-s; //9
    t = t-s; //6

    cout << "\nMenukarkan 2 Variabel tanpa Variabel Sementara\n";
    cout << "T : " << t << endl << "S : " << s;

    return 0;
}
