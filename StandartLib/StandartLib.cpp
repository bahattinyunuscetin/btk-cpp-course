#include <iostream> 
#include <fstream> 
#include <string>

 

// std::string selam(std::string mesaj) {
//     return mesaj;
// }

// using func = std::string(*)(std::string);


// void geriAra(func f) {
//    std::string a =  f("Merhaba");
//    std::cout << a;
// }

using namespace std;   // artık std demeye gerek kalmadı

int main()
{
   string *yaz  = new string;
   ofstream* dosya = new ofstream("dosya.txt");

   if(dosya->is_open()){
    cin >> *yaz;
    *dosya << *yaz;
    dosya ->close();
   }
     
    
}
 



// namespace btk{
//     int sayi=100;
//     void merhaba();    // başka bir yerde merhaba varsa birbirinde ayrılabilir btk::merhaba denebilir
// }
