#include <iostream>

class Hayvan {
     public:     //hayvan sınıfı soyut bir sınıf vazifesi diğer sınıfları yönetmek
	 int a; // soyut sınıflarda değişken tanımlanabilir
	virtual void sesCal()=0;     // 0 a eşitleyerek altındaki sınıfların sescal fonksiyonunu bulundurmasını zorunlu kıldı 
};

class Kopek :public Hayvan {
  public:
  void sesCal(){
	std::cout << "havhav\n";    

  }
};
class Kedi  :public Hayvan {
  public:
  void sesCal(){
	std::cout << "miyav\n";

  }
};
class Ordek :public Hayvan {
  public:
  void sesCal(){
	std::cout << "vak\n";

  }
};
 
void tumSesCal(Hayvan* hPtr ) {
   hPtr->sesCal();
};




int main() {
	Kopek kopek;
	Kedi kedi;
	Ordek ordek;

	kopek.sesCal();
	kedi.sesCal();
	ordek.sesCal();

	tumSesCal(&kopek);
}
