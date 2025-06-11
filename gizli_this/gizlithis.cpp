#include <iostream>

class silah {
public:
	std::string isim;
	int mermikapasitesi;

	
};

class Ak47 : public silah {
public:
	bool seritek;
	int kayisuzunlugu;
	bool durbun;

	void atesEt(std::string isim) {
	   this -> isim =isim;
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


void goster(silah* silahptr){
	std::cout<< silahptr->isim;

}
int main(){


    Ak47 ak47;
    ak47.atesEt("merhaba");
	return 0;
}

