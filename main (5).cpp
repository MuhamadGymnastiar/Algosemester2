#include <iostream>
using namespace std;

class Mahasiswa{
    public :
    virtual void Data (){
        cout << "Data tidak ada" << endl;
    }
};

class Nicholas : public Mahasiswa{
    public :
    string Status = "Mahasiswa Aktif";
    string Nama = "Nicholas Tony Sukino";
    int Umur = 19;
    string Fakultas = "Pariwisata dan Informatika";
    string Jurusan = "Teknologi Informasi";
    void Data (){
        cout << "Status   = " << Status << endl;
        cout << "Nama     = " << Nama << endl;
        cout << "Umur     = " << Umur << endl;
        cout << "Jurusan  = " << Jurusan << endl;
        cout << "Fakultas = " << Fakultas << endl;
    }
};

class Katarina : public Mahasiswa{
    public :
    string Status = "Mahasiswa Aktif";
    string Nama = "Katarina Andrea Laurentia";
    int Umur = 20;
    string Fakultas = "Pariwisata dan Informatika";
    string Jurusan = "Teknologi Informasi";
    void Data (){
        cout << "Status   = " << Status << endl;
        cout << "Nama     = " << Nama << endl;
        cout << "Umur     = " << Umur << endl;
        cout << "Jurusan  = " << Jurusan << endl;
        cout << "Fakultas = " << Fakultas << endl;
    }
};

int main(){
    Mahasiswa *m1 = new Nicholas();
    Mahasiswa *m2 = new Katarina();

    m1 -> Data();
    cout << "\n======================================\n" << endl;
    m2 -> Data();
    return 0;
}