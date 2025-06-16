 #include <iostream>

int main()
{ 

      //  c = (a > b) ? a : b    Eğer a, b’den büyükse c = a olsun, değilse c = b olsun.

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
          if(islem=='s'){
            goto stop;
        }
                    
        switch (islem) {
            case '+':
                std::cout << "Sonuc:" << a + b<< std::endl;
                break;
            case '-':
                std::cout << "Sonuc:" << a - b<< std::endl;
                break;
            case '*':
                std::cout << "Sonuc:" << a * b<< std::endl;
                break;
            case '/':
                std::cout << "Sonuc:" << a / b<< std::endl;
                break;
            default:
                std::cout << "Bilinmeyen islem";
                break;
        }

    }
   std::cout<<"devam";
 
   stop:
   std::cout<<"durdu";

 

     
}


