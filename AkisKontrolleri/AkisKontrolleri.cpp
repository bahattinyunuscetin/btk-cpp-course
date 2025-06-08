 #include <iostream>

int main()
{ 


    int a = 0;
    int b = 0;
    char islem = '+';


    

    while(true){
        std::cout << "Birinci sayi" << std::endl;
        std::cin >> a;
        std::cout << "ikinici sayi" << std::endl;
        std::cin >> b;

        std::cout << "İslem giriniz" << std::endl;
        std::cin >> islem;
        if(islem=='e'){
            continue;
        }
                    
        switch (islem) {
            case '+':
                std::cout << "Sonuc:" << a + b;
                break;
            case '-':
                std::cout << "Sonuc:" << a - b;
                break;
            case '*':
                std::cout << "Sonuc:" << a * b;
                break;
            case '/':
                std::cout << "Sonuc:" << a / b;
                break;
            default:
                std::cout << "Bilinmeyen islem";
                break;
        }

    }
 

 

     
}