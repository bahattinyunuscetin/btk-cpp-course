// #include <iostream>

// template<typename T,typename U,typename L>
// T max(T a,U b,L j){       //değişkelerin türü T yani biz ne istersek o float,int ya da double
//     return (a>b)?a:b;
//     j+=1;
// }
// int main(){
//     std::cout<<max(2.3,4.5,5);

// }

// #include <iostream>
// template<typename T>
// class Mat {
//     public:
//         T a{};
//         T b{};

//         T topla(){
//             return a+b;
//         }
// };

// int main(){
//     Mat<int> mat;
//     mat.a=10;
//     mat.b=20;
//     std::cout<<mat.topla();


//       Mat<int> mat1;
//     mat1.a=10;
//     mat1.b=20;
//     std::cout<<mat1.topla();
// }


#include <iostream>
template<typename T>
class Mat {
    public:
        T a{};
        T b{};

        T topla(){
            return a+b;
        }
};
class Silah{};
class Mermi{};

template<typename T>
T* nesneYap(T* nesne){
 return nesne;
  
}

int main(){
 Silah silah;
 std::cout<<nesneYap<Silah>(&silah);
}