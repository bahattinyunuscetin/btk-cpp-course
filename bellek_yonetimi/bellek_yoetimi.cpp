// #include <iostream>
// class Silah {
// 	public:
// 	    Silah(){
// 			std::cout<<"olustu\n";

// 		}
// 		 ~Silah(){
// 			std::cout<<"silindi\n";
			
// 		};

// };
// int main(){
// 	Silah* silah;

// 	{
// 		silah = new Silah;
// 	}
// 	delete silah;
// 	std::cout<<"hello world\n";
// }















// #include <iostream>
// class Silah {
// 	public:
// 	    Silah(){
// 			std::cout<<"olustu\n";

// 		}
// 		 ~Silah(){
// 			std::cout<<"silindi\n";
			
// 		};

// };
// int main(){
// 	int adet=0;

// 	std::cout<<"dizi boyutu nedir"<<std::endl;
//     std::cin>>adet;
    
// 	int* dizi = new int[adet]; //HEPTE BİR POİNTER Dİ<İ OLUŞTURDU

// 	for(int i=0;i<adet ;i++){  
// 		std::cin>>dizi[i];
// 	}
// 	std::cout<<"girilen elemanlar"<<std::endl;
// 	for(int i=0;i<adet ;i++){
// 		std::cout<<dizi[i];   
		
// 	}
// 	delete[] dizi;

// }






// #include <iostream>
// int  main(){
// 	int* a =(int*)malloc(sizeof(int));
    
// 	*a=10;
	 
// 	free(a);


// 	// int*a=nullptr;  // a yı tanımlar ve boş bir alanab yönlendirir
// 	// a= new int;  
// 	// *a=10;


// 	typedef unsigned int btk;	//btk yı int oalrak tanımladık
// 	int a =10;
// 	btk a = 10;
// }




// #include <iostream>
// class Silah {
// 	public:
// 	int* a =nullptr;
// 	int* b =nullptr;


// 	    Silah(int toplamBirinciSayi,int toplamikinciSayi){
// 			a= new int;
// 			b= new int;

// 			*a=toplamBirinciSayi;
// 			*b=toplamikinciSayi;
			
// }
// 		 ~Silah(){
// 			delete a;
// 			delete b;
// 			std::cout<<"silindi\n";
			
// 		};

// };
// int main(){
// 	Silah* silah =new Silah(10,10);
// 	delete silah;
	
// 	// Silah* silah =(Silah*)malloc(sizeof(Silah));     //cpp de malloc ve free kullanılmaz fakat c de kullanılabilir
// 	// free(silah);                                       //çünkü kurucu ve yıkıcı metotlar çalışmaz

// }

#include <iostream>
#include <memory> 
class Silah {
	public:
        int d{};
	    Silah(){
		std::cout<<"olustu\n";		
}
		 ~Silah(){
		
			std::cout<<"silindi\n";
			
		};

};
int main(){
	std::shared_ptr<Silah> ptr = std::make_shared<Silah>();//ptr doğrudan Silah nesnesini tutar.
	std::shared_ptr<Silah> ptr2 = ptr;  // ptr2 oluştu ve ptr nereyi işaret ediyorsa orayı işaret etsin dedik
	std::cout << ptr->d<<"\n";   // ptr->d ifadesi, o nesnenin içindeki d değişkenine doğrudan erişir.
	std::cout<<ptr.get()<<"\n";
    std::cout<<ptr.use_count()<<"\n";


	std::cout << &(ptr->d) << "\n";
     std::cout << ptr.get() << "\n";   //bir tane ve ilk  değişken d  olduğu için silahın adresi ve dnin adersi aynı 


}
