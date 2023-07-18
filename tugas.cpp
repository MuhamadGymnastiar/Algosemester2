#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
public:
  virtual void identitas(){
    cout << "..." << endl;
  }
};

class Status1 : public Mahasiswa{
public:
  void identitas(){
    cout << "Mahasiswa Aktif";
  }
};

class Status2 : public Mahasiswa{
public:
  void identitas(){
    cout << "             Mahasiswa Aktif" << endl;
  }
};

class Nama1 : public Mahasiswa{
public:
  void identitas(){
    cout << "Nicholas Tony Sukino";
  }
};

class Nama2 : public Mahasiswa{
public:
  void identitas(){
    cout << "        Katarina Andrea Laurensia" << endl;
  }
};

class Usia1 : public Mahasiswa{
public:
  void identitas(){
    cout << "19 tahun";
  }
};

class Usia2 : public Mahasiswa{
public:
  void identitas(){
    cout << "                    20 tahun" << endl;
  }
};

class Jurusan1 : public Mahasiswa{
public:
  void identitas(){
    cout << "S1 - Teknologi Informasi";
  }
};

class Jurusan2 : public Mahasiswa{
public:
  void identitas(){
    cout << "    S1 - Teknologi Informasi" << endl;
  }
};

class Fakultas1 : public Mahasiswa{
public:
  void identitas(){
    cout << "Informatika";
  }
};

class Fakultas2 : public Mahasiswa{
public:
  void identitas(){
    cout << "                 Informatika" << endl;
  }
};

int main(){
  Mahasiswa *a1 = new Status1();
  Mahasiswa *a2 = new Status2();
  Mahasiswa *b1 = new Nama1();
  Mahasiswa *b2 = new Nama2();
  Mahasiswa *c1 = new Usia1();
  Mahasiswa *c2 = new Usia2();
  Mahasiswa *d1 = new Jurusan1();
  Mahasiswa *d2 = new Jurusan2();
  Mahasiswa *e1 = new Fakultas1();
  Mahasiswa *e2 = new Fakultas2();

  a1 -> identitas();
  a2 -> identitas();
  b1 -> identitas();
  b2 -> identitas();
  c1 -> identitas();
  c2 -> identitas();
  d1 -> identitas();
  d2 -> identitas();
  e1 -> identitas();
  e2 -> identitas();

  return 0;
}