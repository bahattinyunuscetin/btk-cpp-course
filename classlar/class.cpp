#include <iostream>
 
class Payment {
	private:
		float tutar=0;
	public:
		std::string paraBirimi;

		void setTutar(float t) {
			if (t > 0) {
				tutar = t;
			}
			else {
				tutar = 0.1;
			}

		}

		void pay() {
			std::cout << tutar << ":Odeme alindi";
		} 

		friend class Test;
};


class Test {
	public:
		void degistir(Payment* payment) {
			payment->tutar = - 10;
		}
};

 
int main() { 
	Payment payment;

	Test test;
	test.degistir(&payment);
	
	payment.paraBirimi = "tl";
	payment.pay();
}



























/*
* 
* class Payment { 	
	private:
		float tutar;
	public:  
		std::string paraBirimi;

		void setTutar(float t) {
			if (t>0) {
				tutar = t;
			}
			else {
				tutar = 0.1;
			}
			
		}
		 
		void pay() {
			std::cout<< tutar << ":Odeme alindi";
		}
};

* 
* class Silah { 
	public:
		std::string isim;
		int mermiKapasitesi;
		std::string renk; 
};
 
class Ak47 : public Silah {
	public:  
		bool seriTek;
		int kayisUzunlugu;
		bool durbun; 
		 
		void atesEt() {
	 
		}
};

class Pistol : public Silah {
	public: 
		int kurmaKoluDeseni;

		void atesEt() {
		 
		}
};

class M1 : public Silah {
	public: 
		bool seriTek;
		int kayisUzunlugu;
		int kurmaPozisyonu;

		void atesEt() {
	 
		}
};

class Hesapla{ 

	public:
		int genislik;
		int yukseklik;
		int alan;

		void giris() {
			std::cout << "Yukselik gir"<<std::endl;
			std::cin >> yukseklik;

			std::cout << "Genislik gir" << std::endl;
			std::cin >> genislik;
		}

		void hesapla(){
			alan = yukseklik * genislik;
			std::cout << alan;
		}

};



int main()
{

	Hesapla hesap;
	hesap.giris();
	hesap.hesapla();
	 
}
 */
  


 //class Silah {
 //	public:
 //		std::string isim;
 //		int mermiKapasitesi;
 //		std::string renk; 
 //
 //		void ates() {
 //			std::cout << "pis pis"; //100
 //		}
 //};
 //
 //class Ak47 : public Silah {
 //	public:
 //		bool seriTek;
 //		int kayisUzunlugu;
 //		bool durbun; 
 //
 //		void ates() {
 //			Silah::ates(); 
 //			std::cout << "bom bom";
 //		}
 //};
 //
 //class Pistol : public Silah {
 //	public:
 //		int kurmaKoluDeseni;
 //
 //		void ates() {
 //			std::cout << "bam bam";
 //		}
 //};
 //
 //class M1 : public Silah {
 //	public:
 //		bool seriTek;
 //		int kayisUzunlugu;
 //		int kurmaPozisyonu;
 //
 //		void ates() {
 //			std::cout << "bum bum";
 //		}
 //};
 // 
 //
 //void atesEt(Silah* silahPtr) {
 //	silahPtr->ates();
 //}
 //  