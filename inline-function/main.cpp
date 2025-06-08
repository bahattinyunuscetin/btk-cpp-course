

#include <iostream>  
#include <string>



inline int topla(int a,int b){
	return a+b;
}

int main(){
  int sonuc = topla(10,18);   // inline function da derleyici a+b yazar geçer işlem yapmaz   10 + 18;
std::cout << sonuc << std::endl;
  
}