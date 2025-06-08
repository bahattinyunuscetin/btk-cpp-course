
#include <iostream>  
#include <string>

class Matematik {
	public:
	int a;
	int b;
	int result=0;
	void topla(){
		this->result = this ->a + this -> b;   // this sınıfın kendi üyerine erişim sağlamak için kullanılır
   }
   void print(){
	std:: cout << this->result;

   }
};

int main(){
	Matematik mat;  // nesne tanımlama
	mat.a=10;
	mat.b=10;
	mat.topla();
	mat.print();
}