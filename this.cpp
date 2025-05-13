#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
        string setget(string jdl)
        {
            // Nilai parameter "judul" untuk member variable "judul"
            this->judul = jdl;
            // Return variable judul
            return this->judul;
        }
};
int main(){
    buku bukunya;
    cout << bukunya.setget("Matematika");
    return 0;
}
