#include <iostream>

class Kitap {
    // private:
    //      int adet=10;
    public:   
       static int adet;
       
       Kitap(){
        adet++;
       }
};
int Kitap::adet = 0;

// void test() {
//    static int a=0;
//     a++;
//     std::cout<< a <<std::endl;
// }


int main(){
    Kitap kitap;
    Kitap kitap1;
    Kitap kitap2;
    Kitap kitap3;
    Kitap kitap4;
    
    std::cout<< Kitap::adet;

    // test();
    // test(); 
}