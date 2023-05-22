#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama):
    nama(pNama) {
        cout << "Orang dibuat\n" << endl;
    }
    ~orang() {
        cout << "Orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }
};

class pelajar : public orang {
public:
    string sekolah;

    pelajar(string pNama, string pSekolah) :
        orang(pNama),
        sekolah(pSekolah) {
        cout << "Pelajar dibuat\n" << endl;
    }

    ~pelajar() {
        cout << "Pelajar dihapus\n" << endl;
    }
    string Perkenalan() {
        return "Hallo, nama saya" + nama + "Dari Sekolah" + sekolah + "\n\n";
    }
};



int main()
{
    std::cout << "Hello World!\n";
}
