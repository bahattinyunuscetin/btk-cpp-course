// #include <iostream>
// double bolme(int a,int b){
 
// 	try {
// 		if(b<1) {
// 			throw -1;
// 		}
		
// 		   return a/b;
// 	}catch(int){
//         std::cout <<"bir sayı 0'a bolunemez";

// 	}

//   return 0;
	
// }
// int main(){
	
// 	std::cout<<bolme(12,0);
	
// }


// #include <iostream>
// double bolme(int a,int b){
 
// 	try {
// 		if(b<1) {
// 			throw -1;
// 		}
// 		if (a<1){
// 			throw "0 bolunemez";
// 		}
		
// 		   return a/b;
// 	}catch(int err){
//         std::cout <<err<<"bir sayı 0'a bolunemez";

// 	}catch(const char* err){
// 		std::cout<<*err<<"bir sayı 0 a bolunemez";
// 	}
// return 0;

	
// }
// int main(){
	
// 	std::cout<<bolme(0,2);
	
// }

 
// #include <string>
// #include <iostream>
// class Ex {
// 	private:
// 	std::string message;  // Hata mesajını tutan değişken

// 	public:
// 	// Constructor: Sınıf çağrıldığında mesajı içine alır
// 	Ex(const std::string msg) : message(msg){}
//     // Yazı döndüren fonksiyon: mesajı geri verir
// 	std::string yaz() {
// 	return this->message;
//   }
// }; 



// double bolme(int a,int b){
 
// 	try {
// 		if(b<1) {
// 			throw -1;
// 		}
// 		// Eğer a yani pay 1’den küçükse özel bir hata sınıfı fırlat
// 		if (a<1){
// 			throw Ex("Pay negatif ya da sıfır olamaz!");
// 		}
		
// 		   return a/b;
// 	}catch(int err){
//         std::cout <<err<<"bir sayı 0'a bolunemez";

// 	}catch( Ex err){          
// 		std::cout<<err.yaz();
// 	}
// return 0;

	
// }
// int main(){
	
// 	std::cout<<bolme(0,2);
	
// }



// int a(10);  ikiside aynı böylede bir atama yöntemi varmış
// int a=10;



 
// #include <string>
// #include <iostream>
// class Ex {
// 	private:
// 	std::string message;  // Hata mesajını tutan değişken

// 	public:
// 	// Constructor: Sınıf çağrıldığında mesajı içine alır
// 	Ex(const std::string msg) : message(msg){}
//     // Yazı döndüren fonksiyon: mesajı geri verir
// 	std::string yaz() {
// 	return this->message;
//   }
// }; 

// std::string hata(std::string error ) {
// 	return error ;
// }



// double bolme(int a,int b){
 
// 	try {
// 		if(b<1) {
// 			throw -1;
// 		}
// 		// Eğer a yani pay 1’den küçükse özel bir hata sınıfı fırlat
// 		if (a<1){
			
// 		  throw hata("merhaba 123");
// 		}
		
// 		   return a/b;
// 	}catch(int err){
//         std::cout <<err<<"bir sayı 0'a bolunemez";

// 	}catch(std::string err){          
// 		std::cout<<err;
// 	}
// return 0;

	
// }
// int main(){
	
// 	std::cout<<bolme(0,2);
	
// }



 
#include <string>
#include <iostream>



std::string hata(std::string error ) {
	return error ;
}



double bolme(int a,int b){
 
	
		if(b<1) {
			throw -1;
		}
		// Eğer a yani pay 1’den küçükse özel bir hata sınıfı fırlat
		if (a<1){
			throw hata("merhaba 123");
		}
		return a/b;
		}
int main(){
	try {
			std::cout<<bolme(0,2);
	
	}catch(int err){
        std::cout <<err<<"bir sayı 0'a bolunemez";

	}catch(std::string err){          
		std::cout<<err;
	}
	
	
}

