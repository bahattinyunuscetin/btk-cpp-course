#include <iostream>

class Silah {
	private:
	 int deger=10;
	 public:
	   
	  int const * get(){     //    ikiside const olursa sıkıntı yok
		return &deger;
    }
	int getBaska(){
		return deger;

	}
};


int main() {
	Silah silah;
	const int* a= silah.get();   //   

	std::cout <<silah.getBaska();
}




// #include <iostream>

// class Silah {
// 	private:
// 	 int deger=10;
// 	 public:
	   
// 	  int * get(Silah* ptr ){    
// 		return &deger;
//     }
// 	int getBaska(){
// 		return deger;

// 	}
// };


// int main() {
// 	Silah silah;
//     silah.get(&silah);   

// 	std::cout <<silah.getBaska();
// }