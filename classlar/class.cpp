#include <iostream>
using namespace std;

// Araba adında bir sınıf oluşturuluyor
class Araba {
private:
    string marka;
    int hiz;

public:
    // Arabanın markasını ayarlayan metot
    void setMarka(string m) {
        marka = m;
    }

    // Arabanın hızını ayarlayan metot
    void setHiz(int h) {
        if (h >= 0) {
            hiz = h;
        } else {
            hiz = 0; // negatif hız olmasın diye önlem
        }
    }

    // Marka ve hızı ekrana yazdıran metot
    void bilgileriGoster() {
        cout << "Araba markasi: " << marka << endl;
        cout << "Hizi: " << hiz << " km/s" << endl;
    }

    // Arabayı çalıştıran metot
    void calistir() {
        cout << marka << " calisiyor... " << endl;
    }

    // Arabayı durduran metot
    void durdur() {
        cout << marka << " durdu." << endl;
    }
    
    Araba(bool f,std::string a){
        marka ="bmw";
        std::cout <<a; 
        std::cout <<f; 
    }
      Araba(bool f){
        marka ="bmw";
        std::cout <<f;
          
    }
    Araba(){

    }
    ~Araba(){
        std::cout<<"odeme alindi";
    }
     

};

int main() {
    // Bir Araba nesnesi oluşturuluyor
    Araba araba1(true);
    

    // Nesneye ait özellikler ve metotlar kullanılıyor
    araba1.setMarka("Honda");
    araba1.setHiz(120);

    araba1.calistir();
    araba1.bilgileriGoster();
    araba1.durdur();

    return 0;
}
