#include <iostream>
#include <string>
using namespace std;

class Barang {
    public:
    string nama;
    int kode;
    
    Barang(string namaBarang, int kodeBarang);
};

Barang::Barang(string nama, int kode){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nama Barang   : " << nama << endl;
    cout << "Kode Barang  : " << kode << endl;
}

int main() {
    Barang brg ("TV", 12345);
    return 0;
}