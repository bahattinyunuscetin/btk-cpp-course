# 🛤️ BTK C++ Öğrenme Yolu

Bu dosya, BTK C++ eğitim projelerini hangi sırayla çalışmanız gerektiğini gösterir. Her adım, bir önceki adımın üzerine inşa edilir.

## 🎯 Genel Bakış

Bu öğrenme yolu, **sıfırdan başlayarak** C++ programlama dilini öğrenmenizi sağlar. Her modül, bir önceki modülün üzerine inşa edilir ve pratik örneklerle desteklenir.

---

## 📚 Öğrenme Modülleri

### 🥇 **MODÜL 1: Temel Programlama (1-2 Hafta)**

#### 📁 **AkisKontrolleri** - İlk Adım
**Süre:** 3-4 gün
**Ön Koşul:** Yok
**Konular:**
- if-else yapıları
- switch-case yapıları
- for, while, do-while döngüleri
- break ve continue kullanımı

**Neden Bu Sırada:**
Bu modül, programlama mantığının temelini oluşturur. Döngüler ve koşullar olmadan hiçbir program yazamazsınız.

**Pratik Örnek:**
```cpp
for(int i = 1; i <= 10; i++) {
    if(i % 2 == 0) {
        cout << i << " çift sayıdır" << endl;
    }
}
```

---

#### 📁 **Onislemci** - Derleyici Direktifleri
**Süre:** 2-3 gün
**Ön Koşul:** AkisKontrolleri
**Konular:**
- #include direktifi
- #define makroları
- Header file yapısı
- Namespace kullanımı

**Neden Bu Sırada:**
Header dosyaları ve makrolar, kod organizasyonu için kritiktir. Büyük projeler yazmaya başlamadan önce bunları öğrenmelisiniz.

**Pratik Örnek:**
```cpp
#include <iostream>
#define PI 3.14159

using namespace std;
```

---

### 🥈 **MODÜL 2: Nesne Yönelimli Programlama Temelleri (2-3 Hafta)**

#### 📁 **nesne-yonelimli-giris** - OOP Kavramları
**Süre:** 4-5 gün
**Ön Koşul:** Onislemci
**Konular:**
- Object-oriented programming basics
- Class vs Object
- Encapsulation principles
- OOP design patterns

**Neden Bu Sırada:**
OOP, modern programlamanın temelidir. Bu kavramları iyi anlamadan ilerleyemezsiniz.

**Pratik Örnek:**
```cpp
class Araba {
private:
    string marka;
    int hiz;
public:
    void hizlan() { hiz += 10; }
    int getHiz() { return hiz; }
};
```

---

#### 📁 **classlar** - Sınıf Tasarımı
**Süre:** 5-6 gün
**Ön Koşul:** nesne-yonelimli-giris
**Konular:**
- Class tanımlama
- Constructor ve destructor
- Public/private access modifiers
- Member functions

**Neden Bu Sırada:**
Sınıflar, OOP'nin yapı taşlarıdır. Bu modülü iyi öğrenmeden diğer OOP konularına geçemezsiniz.

**Pratik Örnek:**
```cpp
class Ogrenci {
private:
    string ad;
    int numara;
public:
    Ogrenci(string a, int n) : ad(a), numara(n) {}
    ~Ogrenci() { cout << "Öğrenci silindi" << endl; }
};
```

---

#### 📁 **kapsulleme** - Veri Gizleme
**Süre:** 3-4 gün
**Ön Koşul:** classlar
**Konular:**
- Data hiding
- Getter/setter methods
- Access control
- Information hiding

**Neden Bu Sırada:**
Encapsulation, güvenli ve sürdürülebilir kod yazmanın temelidir.

**Pratik Örnek:**
```cpp
class BankaHesabi {
private:
    double bakiye;
public:
    double getBakiye() { return bakiye; }
    void setBakiye(double yeniBakiye) {
        if(yeniBakiye >= 0) bakiye = yeniBakiye;
    }
};
```

---

### 🥉 **MODÜL 3: Gelişmiş OOP (3-4 Hafta)**

#### 📁 **kalıtım** - Kod Yeniden Kullanımı
**Süre:** 5-6 gün
**Ön Koşul:** kapsulleme
**Konular:**
- Base ve derived classes
- Public, private, protected inheritance
- Multiple inheritance
- Diamond problem

**Neden Bu Sırada:**
Inheritance, kod tekrarını önler ve hiyerarşik yapılar oluşturur.

**Pratik Örnek:**
```cpp
class Hayvan {
protected:
    string isim;
public:
    virtual void sesCal() = 0;
};

class Kopek : public Hayvan {
public:
    void sesCal() { cout << "Hav hav!" << endl; }
};
```

---

#### 📁 **cok_bicimlilik** - Esnek Programlama
**Süre:** 4-5 gün
**Ön Koşul:** kalıtım
**Konular:**
- Runtime polymorphism
- Virtual function tables
- Dynamic binding
- Interface design

**Neden Bu Sırada:**
Polymorphism, esnek ve genişletilebilir kod yazmanızı sağlar.

**Pratik Örnek:**
```cpp
void hayvanSesiCal(Hayvan* h) {
    h->sesCal(); // Runtime'da hangi hayvan olduğuna karar verir
}
```

---

#### 📁 **soyutlama** - Interface Tasarımı
**Süre:** 3-4 gün
**Ön Koşul:** cok_bicimlilik
**Konular:**
- Abstract classes
- Pure virtual functions
- Interface design
- Contract-based programming

**Neden Bu Sırada:**
Abstract classes, interface tasarımının temelidir.

**Pratik Örnek:**
```cpp
class Sekil {
public:
    virtual double alanHesapla() = 0;
    virtual double cevreHesapla() = 0;
};
```

---

#### 📁 **sanal_metotlar** - Virtual Functions
**Süre:** 4-5 gün
**Ön Koşul:** soyutlama
**Konular:**
- Virtual functions
- Pure virtual functions
- Abstract classes
- Runtime polymorphism

**Neden Bu Sırada:**
Virtual functions, polymorphism'in teknik implementasyonudur.

---

### 🏆 **MODÜL 4: İleri C++ Özellikleri (4-5 Hafta)**

#### 📁 **sablonlar** - Generic Programming
**Süre:** 5-6 gün
**Ön Koşul:** sanal_metotlar
**Konular:**
- Function templates
- Class templates
- Template specialization
- Generic programming

**Neden Bu Sırada:**
Templates, type-safe generic kod yazmanızı sağlar.

**Pratik Örnek:**
```cpp
template<typename T>
T maksimum(T a, T b) {
    return (a > b) ? a : b;
}
```

---

#### 📁 **istisnalar** - Hata Yönetimi
**Süre:** 4-5 gün
**Ön Koşul:** sablonlar
**Konular:**
- Try-catch blokları
- Exception types
- RAII (Resource Acquisition Is Initialization)
- Error handling strategies

**Neden Bu Sırada:**
Exception handling, güvenilir uygulamalar geliştirmek için kritiktir.

**Pratik Örnek:**
```cpp
try {
    if(b == 0) throw "Sıfıra bölme hatası!";
    return a / b;
} catch(const char* msg) {
    cout << "Hata: " << msg << endl;
    return 0;
}
```

---

#### 📁 **bellek_yonetimi** - Memory Management
**Süre:** 5-6 gün
**Ön Koşul:** istisnalar
**Konular:**
- Dynamic memory allocation (new/delete)
- Pointer aritmetiği
- Memory leaks önleme
- Smart pointers (modern C++)

**Neden Bu Sırada:**
Memory management, C++'ın güçlü yanlarından biridir ama dikkatli kullanılmalıdır.

**Pratik Örnek:**
```cpp
int* dizi = new int[10];
// ... kullanım ...
delete[] dizi; // Memory leak önleme
```

---

### 🎯 **MODÜL 5: Uzman Seviye (5-6 Hafta)**

#### 📁 **constlar** - Const Correctness
**Süre:** 3-4 gün
**Ön Koşul:** bellek_yonetimi
**Konular:**
- Const variables
- Const member functions
- Const pointers
- Const correctness

**Neden Bu Sırada:**
Const correctness, kod güvenliği ve okunabilirlik için önemlidir.

---

#### 📁 **statik_metot** - Static Members
**Süre:** 3-4 gün
**Ön Koşul:** constlar
**Konular:**
- Static member variables
- Static member functions
- Class-level data
- Singleton pattern

**Neden Bu Sırada:**
Static members, class-level state yönetimi için kullanılır.

---

#### 📁 **inline-function** - Performance Optimization
**Süre:** 2-3 gün
**Ön Koşul:** statik_metot
**Konular:**
- Inline function tanımlama
- Performance optimization
- Compiler optimizations
- Header-only libraries

**Neden Bu Sırada:**
Performance optimization, profesyonel C++ geliştiricileri için önemlidir.

---

#### 📁 **asiri-yukleme** - Function Overloading
**Süre:** 3-4 gün
**Ön Koşul:** inline-function
**Konular:**
- Aynı isimde farklı parametreli fonksiyonlar
- Overload resolution
- Type safety

**Neden Bu Sırada:**
Function overloading, API tasarımında önemlidir.

---

#### 📁 **geri_cagirma** - Callback Functions
**Süre:** 4-5 gün
**Ön Koşul:** asiri-yukleme
**Konular:**
- Function pointers
- Callback mechanisms
- Event-driven programming
- Higher-order functions

**Neden Bu Sırada:**
Callbacks, modern programlama paradigmalarının temelidir.

---

#### 📁 **arkadas_metot** - Friend Functions
**Süre:** 3-4 gün
**Ön Koşul:** geri_cagirma
**Konular:**
- Friend function tanımlama
- Cross-class erişim
- Private member erişimi

**Neden Bu Sırada:**
Friend functions, encapsulation kurallarının esnek kullanımıdır.

---

#### 📁 **gizli_this** - This Pointer
**Süre:** 3-4 gün
**Ön Koşul:** arkadas_metot
**Konular:**
- This pointer kavramı
- Self-reference in classes
- Method chaining
- Object identity

**Neden Bu Sırada:**
This pointer, OOP'nin temel kavramlarından biridir.

---

#### 📁 **metot_kesme** - Method Overriding
**Süre:** 4-5 gün
**Ön Koşul:** gizli_this
**Konular:**
- Method overriding
- Virtual functions
- Base class pointers
- Polymorphic behavior

**Neden Bu Sırada:**
Method overriding, inheritance'in doğal sonucudur.

---

### 🖥️ **MODÜL 6: GUI ve Proje Geliştirme (6-7 Hafta)**

#### 📁 **StandartLib** - STL Kullanımı
**Süre:** 4-5 gün
**Ön Koşul:** metot_kesme
**Konular:**
- STL containers
- File I/O operations
- String manipulation
- Standard algorithms

**Neden Bu Sırada:**
STL, modern C++ programlamanın vazgeçilmezidir.

---

#### 📁 **proje** - wxWidgets GUI Uygulaması
**Süre:** 1-2 hafta
**Ön Koşul:** StandartLib
**Konular:**
- GUI programming
- wxWidgets framework
- CMake build system
- Cross-platform development

**Neden Bu Sırada:**
Bu, tüm öğrendiklerinizi bir araya getiren final projedir.

---

## 📅 Haftalık Çalışma Planı

### 🗓️ **1. Hafta**
- **Gün 1-3:** AkisKontrolleri
- **Gün 4-5:** Onislemci
- **Gün 6-7:** nesne-yonelimli-giris

### 🗓️ **2. Hafta**
- **Gün 1-5:** classlar
- **Gün 6-7:** kapsulleme

### 🗓️ **3. Hafta**
- **Gün 1-5:** kalıtım
- **Gün 6-7:** cok_bicimlilik

### 🗓️ **4. Hafta**
- **Gün 1-3:** soyutlama
- **Gün 4-7:** sanal_metotlar

### 🗓️ **5. Hafta**
- **Gün 1-5:** sablonlar
- **Gün 6-7:** istisnalar

### 🗓️ **6. Hafta**
- **Gün 1-5:** bellek_yonetimi
- **Gün 6-7:** constlar

### 🗓️ **7. Hafta**
- **Gün 1-3:** statik_metot
- **Gün 4-5:** inline-function
- **Gün 6-7:** asiri-yukleme

### 🗓️ **8. Hafta**
- **Gün 1-5:** geri_cagirma, arkadas_metot
- **Gün 6-7:** gizli_this

### 🗓️ **9. Hafta**
- **Gün 1-5:** metot_kesme
- **Gün 6-7:** StandartLib

### 🗓️ **10. Hafta**
- **Gün 1-7:** proje (wxWidgets GUI)

---

## 🎯 Öğrenme İpuçları

### 💡 **Her Modül İçin:**
1. **Kodu Okuyun:** Önce mevcut kodu anlamaya çalışın
2. **Kodu Çalıştırın:** Derleyin ve test edin
3. **Kodu Değiştirin:** Küçük değişiklikler yapın
4. **Kendi Örneğinizi Yazın:** Benzer bir program yazın

### 🔍 **Pratik Yapma:**
- Her modülde en az 2-3 farklı örnek yazın
- Hataları kendiniz bulmaya çalışın
- Debugging yapmayı öğrenin
- Kod yorumları ekleyin

### 📚 **Ek Kaynaklar:**
- [C++ Reference](https://en.cppreference.com/)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/)
- [Modern C++ Tutorial](https://github.com/AnthonyCalandra/modern-cpp-features)

---

## 🚨 Dikkat Edilecek Noktalar

### ⚠️ **Sırayı Bozmayın:**
Her modül, bir önceki modülün üzerine inşa edilir. Sırayı bozarsanız zorlanabilirsiniz.

### ⏰ **Acele Etmeyin:**
Her konuyu tam anlamadan bir sonrakine geçmeyin. C++ karmaşık bir dildir.

### 🧪 **Pratik Yapın:**
Sadece okumak yeterli değil. Her konuyu kod yazarak pratik yapın.

### 🔄 **Tekrar Edin:**
Önceki konuları unutmayın. Düzenli olarak tekrar edin.

---

## 🎉 Başarı Kriterleri

### ✅ **Modül Tamamlandı Sayılır:**
- Kod çalışıyor ve hatasız
- Konuyu açıklayabiliyorsunuz
- Benzer bir örnek yazabiliyorsunuz
- Bir sonraki modüle geçebiliyorsunuz

### 🏆 **Kurs Tamamlandı Sayılır:**
- Tüm modüller tamamlandı
- GUI projesi çalışıyor
- C++ temel konuları anlaşıldı
- Kendi projeleri geliştirilebiliyor

---

## 📞 Yardım ve Destek

### 🤝 **Sorun Yaşarsanız:**
1. **Kodu Tekrar Gözden Geçirin**
2. **Hata Mesajlarını Okuyun**
3. **Debugging Yapın**
4. **Dokümantasyonu Kontrol Edin**
5. **Gerekirse Önceki Modüllere Dönün**

### 💬 **Topluluk Desteği:**
- GitHub Issues
- Stack Overflow
- C++ Forumları
- BTK Akademi Destek

---

Bu öğrenme yolu, C++ programlama dilini sistematik ve etkili bir şekilde öğrenmenizi sağlar. Her adımı dikkatlice takip edin ve acele etmeyin. Başarılar! 🚀
