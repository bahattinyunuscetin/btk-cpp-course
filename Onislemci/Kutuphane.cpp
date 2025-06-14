#include "Kutuphane.h"

Mat::Mat(int a,int b) : a(a),b(b) {}

int Mat::topla() {
	return this->a + this->b;
}

int topla(int a, int b) {
	return a + b;
}




// #include <iostream>

// #define SAYI 1

// #define Topla(a,b)(a+b)
// int main(){
    
//     #ifdef DEBUG
    
//     #endif 
    
//     std::cout << SAYI*2<<"\n";
//      std::cout << Topla(10,20);
// }



 #include <iostream>

#define DEBUG

#define Topla(a,b)(a+b)
int main(){
    
    #ifdef DEBUG  //DEBUG TANIMLANMIŞMI TANIMLANDIĞI İÇİN ÇALIŞACAK
    std::cout << "DEV MESAJLARI ";
    #endif 
    
    
     std::cout << Topla(10,20);
}