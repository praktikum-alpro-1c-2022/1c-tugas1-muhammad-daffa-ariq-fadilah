#include <iostream>
using namespace std;

int main (){
// Tugas 3
//  Menukarkan 2 Variabel tanpa Variabel Sementara
    int t, s;
    t = 24; //Variabel awal
    s = 48; //Variabel awal

    t = t+s; //8
    s = t-s; //3
    t = t-s; //5

    cout << "\nMenukarkan 2 Variabel tanpa Variabel Sementara\n";
    cout << "T : " << t << endl << "S : " << s;

    return 0;
}
