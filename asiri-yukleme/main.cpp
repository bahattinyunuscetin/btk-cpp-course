

#include <iostream>  



void print(std::string text = "test", int a = 0, bool as = false) { //kullanýcýdan deðer gelmemesine karþýn ona varsayýlan deðer atanabilir
	std::cout << text,a,as;
}


int topla(int a, int b) {
	std::cout << "\nint ";
	return a + b;
}
double topla(double a, double b) {
	std::cout << "\ndouble ";
	return a + b;
}

int main()
{
	std::cout << topla(5, 8);
	std::cout << topla(5.4, 8.4);
	std::cout << topla('g', 'f');
	std::cout << topla(false, true);

	print();

	
}
