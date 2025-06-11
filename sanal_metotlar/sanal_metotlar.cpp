#include <iostream>

class silah {
public:
	std::string isim;
	int mermikapasitesi;
    virtual void atesEt()=0;
	
};

class Ak47 : public silah {
public:
	bool seritek;
	int kayisuzunlugu;
	bool durbun;

	void atesEt() {
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


void atesEt(silah* silahPtr){
    silahPtr->atesEt();
}
int main(){
    Ak47 ak47;
    Pistol pistol;
    M1 m1;
    atesEt(&ak47);
    atesEt(&pistol);
    atesEt(&m1);
	return 0;
}

