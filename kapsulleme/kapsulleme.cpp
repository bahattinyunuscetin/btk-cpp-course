#include <iostream>

class Payment {
     private:
	     float tutar;
	 public:
	     std::string paraBirimi;
		 
		 void setTutar(float t){
			if(t>0){
				tutar=t;
			}else{
				tutar=0.1;
			}

		 }
		 void pay(){
			std::cout << tutar << " " << paraBirimi << " ödeme alındı." << std::endl;
    
		 }

};

int main(){
	Payment pay;
	pay.setTutar(50.6);
	pay.paraBirimi = "tl";
	pay.pay();

	return 0;

}