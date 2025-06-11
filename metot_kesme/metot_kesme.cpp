#include <iostream>

class silah {
public:
	std::string isim;
	int mermikapasitesi;
    void atesEt(){
		std::cout << "silah ateş ediyor\n";
	}
	
};

class Ak47 : public silah {
public:
	bool seritek;
	int kayisuzunlugu;
	bool durbun;
   
   void atesEt() {
       silah::atesEt(); // üstteki metodu ezmemek için
	std::cout << "ak47 ateş ediyor\n";
	}
};

class Pistol : public silah {
public:
	bool seritek;
	int kayisuzunlugu;
	bool durbun;

	void atesEt() {
		std::cout << "Pistol ateş ediyor\n";
	}
};

class M1 : public silah {
public:
	bool seritek;
	int kayisuzunlugu;
	int kurmapozisyonu;

	void atesEt() {
		std::cout << "M1 ateş ediyor\n";
	}
};



int main(){
    Ak47 ak47;
    ak47.atesEt();

	return 0;
}

