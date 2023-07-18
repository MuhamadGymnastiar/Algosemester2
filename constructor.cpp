#include <iostream>
using namespace std;

class Laptop{
  private:
  string pemilik;
  string merk;

  public:
  Laptop(string var1,string var2){
    pemilik = var1;
    merk = var2;

    cout << "Paket laptop " << merk << " milik " << pemilik << " sudah dikirim." << endl; 
  }
};
int main(){
  Laptop laptopFadlan("Fadlan","Acer");
  Laptop laptopRisma("Risma","Samsung");
  Laptop laptopCarlos("Carlos","Asus");

  return 0;
}