#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) : nama(pNama) {
        cout << "Pasien \"" << nama << "\"Ada\n";
    }
    ~pasien() {
        cout << "Pasien \"" << nama << "\"Tidak Ada\n";
    }
    void tambahDokter(dokter*);
    void cetakDokter();
};



int main()
{
    std::cout << "Hello World!\n";
}

