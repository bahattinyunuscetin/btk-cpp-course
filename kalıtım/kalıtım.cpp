#include <iostream>

class silah {
public:
	std::string isim;
	int mermikapasitesi;

	// silah() {
	// 	std::cout << "silah olustu\n";
	// }
	// ~silah() {
	// 	std::cout << "silah bitti\n";
	// }
};

class Ak47 : public silah {
public:
	bool seritek;
	int kayisuzunlugu;
	bool durbun;

	void atesEt() {
		std::cout << "Ak47 ateş ediyor\n";
	}

	// Ak47() {
	// 	std::cout << "ak47 olustu\n";
	// }
	// ~Ak47() {
	// 	std::cout << "ak47 bitti\n";
	// }
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
	ak47.isim="ak47";

	goster(&ak47);

	Pistol pistol;
	pistol.isim= "pistol";

	goster(&pistol);

	M1 m1;
	m1.isim="m1";

	goster(&m1);
	return 0;
}



// // test fonksiyonunun TANIMI
// void test(Ak47& ak47, Ak47* ak47ptr) {
// 	std::cout << "test fonksiyonu çalıştı\n";
// 	std::cout << "isim (ref): " << ak47.isim << "\n";
// 	std::cout << "isim (ptr): " << ak47ptr->isim << "\n";
// }

// void Test1(Ak47 *ak47ptr){
//     std::cout<<ak47ptr->durbun<< "\n";
// }

// int main() {
// Pistol pistol;
// Ak47* ak47Ptr   = (Ak47*)&pistol;
// Test1((Ak47*)&pistol);


// 	return 0;
// }


// int main() {
// 	// Ak47 ak47;
// 	// ak47.isim = "test";

// 	// Ak47* ak47pointer = &ak47;
// 	// ak47pointer->isim = "test";
// 	// ak47pointer->atesEt();

// 	// Ak47& ak47ref = ak47;
// 	// ak47ref.isim = "test";

// 	// test(ak47, &ak47);

// 	// silah* silahptr = &ak47 ;
// 	// silahptr->isim="merhaba\n";
// 	// std::cout << ak47.isim;


// 	// int sayi1=10;
//     // int& deneme = sayi1;
// 	// int& deneme2 = sayi1;    // aynı adresi gösteriyor birine birşey olursa öbürleride etkilenir

// 	// deneme=5;
// 	// std::cout<< sayi1;
// 	// sayi1=50;
//     // std::cout<< deneme2;

    // 	Ak47 ak47;   //olması gereken senaryo
// 	ak47.seritek=1;
// 	ak47.isim = "123";
    
//     silah* silahptr = &ak47;      
    
//     Ak47* ak47ptr = (Ak47*)silahptr;    // bana güven diyor silahptr ak47 nin dışında değil diyor
//     std::cout<< ak47ptr ->seritek<< "\n";
    
    
// 	return 0;
// }




















