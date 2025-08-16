# 📁 BTK C++ Proje Yapısı Detayları

Bu dosya, BTK C++ eğitim projelerinin detaylı klasör yapısını ve içeriklerini açıklar.

## 🗂️ Ana Dizin Yapısı

```
btk-c++/
├── 📁 AkisKontrolleri/           # Akış kontrol yapıları
├── 📁 Onislemci/                 # Ön işlemci direktifleri
├── 📁 arkadas_metot/             # Friend function örnekleri
├── 📁 asiri-yukleme/             # Function overloading
├── 📁 bellek_yonetimi/           # Memory management
├── 📁 classlar/                  # Temel sınıf yapıları
├── 📁 constlar/                  # Const keyword kullanımı
├── 📁 cok_bicimlilik/            # Polymorphism
├── 📁 geri_cagirma/              # Callback functions
├── 📁 gizli_this/                # This pointer
├── 📁 inline-function/            # Inline functions
├── 📁 istisnalar/                 # Exception handling
├── 📁 kalıtım/                    # Inheritance
├── 📁 kapsulleme/                 # Encapsulation
├── 📁 metot_kesme/                # Method overriding
├── 📁 nesne-yonelimli-giris/      # OOP temel kavramları
├── 📁 proje/                      # wxWidgets GUI projesi
├── 📁 sablonlar/                  # Templates
├── 📁 sanal_metotlar/             # Virtual functions
├── 📁 soyutlama/                  # Abstract classes
├── 📁 StandartLib/                # Standard library
├── 📁 statik_metot/               # Static methods
├── 📄 README.md                   # Ana proje dokümantasyonu
├── 📄 PROJECT_STRUCTURE.md        # Bu dosya
└── 📄 .gitignore                  # Git ignore kuralları
```

---

## 🔍 Klasör Detayları

### 📁 AkisKontrolleri/
**Açıklama:** Akış kontrol yapıları ve döngüler
**İçerik:**
- `AkisKontrolleri.cpp` - Ana kaynak kod
- `AkisKontrolleri.vcxproj` - Visual Studio proje dosyası
- `Debug/`, `Release/` - Build dizinleri

**Öğrenilen Konular:**
- if-else yapıları
- switch-case yapıları
- for, while, do-while döngüleri
- break ve continue kullanımı

---

### 📁 Onislemci/
**Açıklama:** Ön işlemci direktifleri ve header files
**İçerik:**
- `Onislemci.cpp` - Ana kaynak kod
- `Kutuphane.cpp` - Kütüphane fonksiyonları
- `Kutuphane.h` - Header dosyası
- `test.h` - Test header dosyası

**Öğrenilen Konular:**
- #include direktifi
- #define makroları
- Header file yapısı
- Namespace kullanımı

---

### 📁 arkadas_metot/
**Açıklama:** Friend function örnekleri
**İçerik:**
- `arkadas_metot.cpp` - Ana kaynak kod
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Friend function tanımlama
- Cross-class erişim
- Private member erişimi

---

### 📁 asiri-yukleme/
**Açıklama:** Function overloading örnekleri
**İçerik:**
- `main.cpp` - Ana kaynak kod
- `Fonksiyonlar.sln` - Visual Studio solution
- `Fonksiyonlar.vcxproj` - Proje dosyası

**Öğrenilen Konular:**
- Aynı isimde farklı parametreli fonksiyonlar
- Overload resolution
- Type safety

---

### 📁 bellek_yonetimi/
**Açıklama:** Memory management ve pointer örnekleri
**İçerik:**
- `bellek_yoetimi.cpp` - Ana kaynak kod (158 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Dynamic memory allocation (new/delete)
- Pointer aritmetiği
- Memory leaks önleme
- Smart pointers (modern C++)

---

### 📁 classlar/
**Açıklama:** Temel sınıf yapıları
**İçerik:**
- `class.cpp` - Ana kaynak kod (76 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Class tanımlama
- Constructor ve destructor
- Public/private access modifiers
- Member functions

---

### 📁 constlar/
**Açıklama:** Const keyword kullanımı
**İçerik:**
- `constlar.cpp` - Ana kaynak kod (50 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Const variables
- Const member functions
- Const pointers
- Const correctness

---

### 📁 cok_bicimlilik/
**Açıklama:** Polymorphism örnekleri
**İçerik:**
- `polymorphisim.cpp` - Ana kaynak kod (60 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Runtime polymorphism
- Virtual function tables
- Dynamic binding
- Interface design

---

### 📁 geri_cagirma/
**Açıklama:** Callback function örnekleri
**İçerik:**
- `main.cpp` - Ana kaynak kod (35 satır)
- `Fonksiyonlar.sln` - Visual Studio solution
- `Fonksiyonlar.vcxproj` - Proje dosyası

**Öğrenilen Konular:**
- Function pointers
- Callback mechanisms
- Event-driven programming
- Higher-order functions

---

### 📁 gizli_this/
**Açıklama:** This pointer kullanımı
**İçerik:**
- `gizlithis.cpp` - Ana kaynak kod (61 satır)
- `AkisKontrolleri.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- This pointer kavramı
- Self-reference in classes
- Method chaining
- Object identity

---

### 📁 inline-function/
**Açıklama:** Inline function örnekleri
**İçerik:**
- `main.cpp` - Ana kaynak kod (16 satır)
- `Fonksiyonlar.sln` - Visual Studio solution
- `Fonksiyonlar.vcxproj` - Proje dosyası

**Öğrenilen Konular:**
- Inline function tanımlama
- Performance optimization
- Compiler optimizations
- Header-only libraries

---

### 📁 istisnalar/
**Açıklama:** Exception handling
**İçerik:**
- `istisnalar.cpp` - Ana kaynak kod (197 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Try-catch blokları
- Exception types
- RAII (Resource Acquisition Is Initialization)
- Error handling strategies

---

### 📁 kalıtım/
**Açıklama:** Inheritance örnekleri
**İçerik:**
- `kalıtım.cpp` - Ana kaynak kod (161 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Base ve derived classes
- Public, private, protected inheritance
- Multiple inheritance
- Diamond problem

---

### 📁 kapsulleme/
**Açıklama:** Encapsulation örnekleri
**İçerik:**
- `kapsulleme.cpp` - Ana kaynak kod (32 satır)
- `Sablon.sln` - Visual Studio solution
- `Sablon.vcxproj` - Proje dosyası

**Öğrenilen Konular:**
- Data hiding
- Getter/setter methods
- Access control
- Information hiding

---

### 📁 metot_kesme/
**Açıklama:** Method overriding
**İçerik:**
- `metot_kesme.cpp` - Ana kaynak kod (56 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Method overriding
- Virtual functions
- Base class pointers
- Polymorphic behavior

---

### 📁 nesne-yonelimli-giris/
**Açıklama:** OOP temel kavramları
**İçerik:**
- `oop.cpp` - Ana kaynak kod (25 satır)
- `Diziler.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Object-oriented programming basics
- Class vs Object
- Encapsulation principles
- OOP design patterns

---

### 📁 proje/
**Açıklama:** wxWidgets GUI uygulaması
**İçerik:**
- `main.cpp` - Ana kaynak kod (22 satır)
- `CMakelists.txt` - CMake konfigürasyonu
- `Makefile` - Make build script
- `kutuphane.cpp` - Kütüphane fonksiyonları
- `WXvidgets/` - wxWidgets kütüphanesi

**Öğrenilen Konular:**
- GUI programming
- wxWidgets framework
- CMake build system
- Cross-platform development

---

### 📁 sablonlar/
**Açıklama:** Template programming
**İçerik:**
- `sablonlar.cpp` - Ana kaynak kod (62 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Function templates
- Class templates
- Template specialization
- Generic programming

---

### 📁 sanal_metotlar/
**Açıklama:** Virtual function örnekleri
**İçerik:**
- `sanal_metotlar.cpp` - Ana kaynak kod (58 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Virtual functions
- Pure virtual functions
- Abstract classes
- Runtime polymorphism

---

### 📁 soyutlama/
**Açıklama:** Abstract class örnekleri
**İçerik:**
- `soyutlama.cpp` - Ana kaynak kod (49 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Abstract classes
- Pure virtual functions
- Interface design
- Contract-based programming

---

### 📁 StandartLib/
**Açıklama:** Standard library kullanımı
**İçerik:**
- `StandartLib.cpp` - Ana kaynak kod (42 satır)
- `StandartLib.vcxproj` - Visual Studio proje dosyası
- `dosya.txt` - Test dosyası

**Öğrenilen Konular:**
- STL containers
- File I/O operations
- String manipulation
- Standard algorithms

---

### 📁 statik_metot/
**Açıklama:** Static method örnekleri
**İçerik:**
- `statik.cpp` - Ana kaynak kod (47 satır)
- `Siniflar.vcxproj` - Visual Studio proje dosyası

**Öğrenilen Konular:**
- Static member variables
- Static member functions
- Class-level data
- Singleton pattern

---

## 🔧 Proje Dosya Türleri

### 📄 Kaynak Kodlar
- `*.cpp` - C++ kaynak dosyaları
- `*.h` - Header dosyaları

### 🏗️ Build Sistemleri
- `*.vcxproj` - Visual Studio proje dosyaları
- `*.sln` - Visual Studio solution dosyaları
- `CMakelists.txt` - CMake konfigürasyonu
- `Makefile` - Make build script

### 📁 Build Dizinleri
- `Debug/` - Debug build çıktıları
- `Release/` - Release build çıktıları
- `build/` - CMake build dizini
- `CMakeFiles/` - CMake geçici dosyaları

### 🚫 Hariç Tutulan Dosyalar
- `*.exe` - Executable dosyalar
- `*.o` - Object dosyalar
- `*.user` - Kullanıcı-spesifik ayarlar
- `.vs/` - Visual Studio geçici dosyaları

---

## 📚 Öğrenme Sırası

### 🎯 Başlangıç (1-3. Hafta)
1. **AkisKontrolleri** - Temel programlama yapıları
2. **Onislemci** - Header files ve direktifler
3. **nesne-yonelimli-giris** - OOP kavramları

### 🚀 Orta Seviye (4-8. Hafta)
1. **classlar** - Sınıf tasarımı
2. **kapsulleme** - Veri gizleme
3. **kalıtım** - Kod yeniden kullanımı
4. **cok_bicimlilik** - Esnek programlama

### 🎓 İleri Seviye (9-12. Hafta)
1. **sablonlar** - Generic programming
2. **istisnalar** - Hata yönetimi
3. **bellek_yonetimi** - Performans optimizasyonu
4. **proje** - GUI uygulaması geliştirme

---

## 🎯 Proje Hedefleri

### ✅ Tamamlanan
- [x] Temel C++ konuları
- [x] OOP prensipleri
- [x] Advanced C++ features
- [x] GUI development

### 🔄 Devam Eden
- [ ] Unit testing
- [ ] Performance optimization
- [ ] Cross-platform compatibility

### 📋 Gelecek Planları
- [ ] Modern C++ (C++11/14/17/20) örnekleri
- [ ] STL container örnekleri
- [ ] Design patterns
- [ ] Network programming
- [ ] Database integration

---

## 🛠️ Geliştirme Araçları

### 🔧 Build Sistemleri
- **Visual Studio** - Windows development
- **CMake** - Cross-platform builds
- **Make** - Unix-like systems
- **MinGW** - Windows GCC port

### 📝 Kod Editörleri
- **Visual Studio Code** - Lightweight editor
- **CLion** - JetBrains C++ IDE
- **Code::Blocks** - Open-source IDE
- **Dev-C++** - Windows C++ IDE

### 🐛 Debugger
- **GDB** - GNU debugger
- **LLDB** - LLVM debugger
- **Visual Studio Debugger** - Windows debugger

---

## 📊 İstatistikler

- **Toplam Klasör:** 25
- **C++ Kaynak Dosyaları:** 25+
- **Header Dosyaları:** 5+
- **Proje Dosyaları:** 25+
- **Build Sistemleri:** 3 (VS, CMake, Make)
- **Toplam Kod Satırı:** 1000+
- **Kapsanan C++ Konuları:** 20+

---

## 🔍 Kod Kalitesi

### 📝 Kod Standartları
- Modern C++ best practices
- Consistent naming conventions
- Comprehensive comments
- Error handling
- Memory management

### 🧪 Test Stratejisi
- Manual testing
- Code review
- Compiler warnings
- Static analysis

### 📚 Dokümantasyon
- Inline comments
- README files
- Code examples
- Learning path guidance

---

Bu proje yapısı, C++ öğrenme sürecini sistematik ve organize bir şekilde takip etmenizi sağlar. Her klasör, belirli bir konuyu öğrenmek için tasarlanmıştır ve örneklerle desteklenmiştir.
