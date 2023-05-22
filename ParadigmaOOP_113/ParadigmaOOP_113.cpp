#include <iostream>
#include <iostream>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\"<<endl;
    }
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }

};

class pelajar: public orang {
    public:
    string sekolah;

    pelajar(string pNama, string pSekolah) :
        orang(pNama),
        sekolah(pSekolah) {
        cout << "pelajar dihapus\n" << endl;
    }

};