

#include <iostream>  
#include <string>

using fint = int(*)(int,int);          // 2. metot

int topla(int a,int b){
	return a+b;
}
// int getir( int(*fint)(int,int)  ){
// 	int a= fint(10,10);
//     return a;                        1. metot


// }

int getir( fint f  ){
	int a= f(10,10);
    return a;


}

int main()
{
  int b=getir(topla);
  std::cout<<b;

	
}



