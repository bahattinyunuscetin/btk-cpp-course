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


#include <string>
#include <iostream>
class Ex {
	private:
	std::string message;

	public:
	Ex(std::string message){
     this->message=message;
  }
  std::string yaz() {
	return this->message;
  }
}; 



double bolme(int a,int b){
 
	try {
		if(b<1) {
			throw -1;
		}
		if (a<1){
			throw Ex("merhaba");
		}
		
		   return a/b;
	}catch(int err){
        std::cout <<err<<"bir sayı 0'a bolunemez";

	}catch(const char* err){
		std::cout<<*err<<"bir sayı 0 a bolunemez";
	}catch(const (Ex)){
		std::cout<<"bir sayı 0 a bolunemez";
	}
return 0;

	
}
int main(){
	
	std::cout<<bolme(0,2);
	
}