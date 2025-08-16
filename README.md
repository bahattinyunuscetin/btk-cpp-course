# 💻 BTK Akademi - C++ Eğitim Projeleri

Merhaba! Bu repo, [BTK Akademi](https://www.btkakademi.gov.tr/) üzerinden aldığım **C++ ile Programlamaya Giriş** eğitiminde öğrendiklerimi pratiğe dökmek için hazırladığım tüm kodları ve mini projeleri içermektedir. 👨‍💻

Kodu ezberlemeye değil, **anlamaya** çalışanlar için açıklamalı notlarla dolu! 🚀 Aşağıda hem proje dizinine hem de C++ hakkında temel bilgilere yer verdim.

---

## 🔍 C++ Nedir?

**C++**, 1980'lerde Bjarne Stroustrup tarafından geliştirilen, sistem programlama, oyun geliştirme ve performans odaklı yazılım geliştirme alanlarında yaygın olarak kullanılan, genel amaçlı bir programlama dilidir. C dilinin üzerine nesne yönelimli programlama (OOP) özellikleri eklenerek oluşturulmuştur.

### ⚙️ Özellikleri:

* Derlemeli ve yüksek performanslıdır.
* Donanım düzeyine yakın kontrol sunar (pointer'lar, bellek yönetimi).
* OOP desteği sayesinde büyük projelerde okunabilir ve sürdürülebilir kod yazılabilir.
* STL (Standard Template Library) gibi hazır veri yapıları ve algoritmalar sunar.

---

## 🧠 C++ ile Tanış: Temel Kavramlar

### 🧮 Değişkenler ve Veri Tipleri

```cpp
int yas = 23;
float boy = 1.75;
char harf = 'A';
bool aktif = true;
```

### 🔁 Koşullar ve Döngüler

```cpp
if (yas >= 18) {
    cout << "Reşitsiniz.";
}

for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
```

### 🧮 Fonksiyonlar

```cpp
int topla(int a, int b) {
    return a + b;
}
```

### 💡 Pointer Kullanımı

```cpp
int x = 10;
int* ptr = &x;
cout << *ptr; // 10
```

### 🧱 Sınıflar (Classes) ve Nesneler

```cpp
class Araba {
  public:
    string marka;
    int hiz;

    void calistir() {
        cout << "Araba çalışıyor!";
    }
};
```

---

## 📂 Repo İçeriği

Bu repo, temel konulardan ileri düzeye kadar adım adım ilerleyen kod dosyaları içerir. Her klasör, bir eğitim modülüne karşılık gelir.

### 📁 Klasör Yapısı

```
btk-c++/
├── 📁 AkisKontrolleri/           # Akış kontrol yapıları (if, switch, loops)
├── 📁 Onislemci/                 # Ön işlemci direktifleri (#include, #define)
├── 📁 arkadas_metot/             # Friend function örnekleri
├── 📁 asiri-yukleme/             # Function overloading örnekleri
├── 📁 bellek_yonetimi/           # Memory management ve pointer örnekleri
├── 📁 classlar/                  # Temel sınıf yapıları
├── 📁 constlar/                  # Const keyword kullanımı
├── 📁 cok_bicimlilik/            # Polymorphism örnekleri
├── 📁 geri_cagirma/              # Callback function örnekleri
├── 📁 gizli_this/                # This pointer kullanımı
├── 📁 inline-function/            # Inline function örnekleri
├── 📁 istisnalar/                 # Exception handling
├── 📁 kalıtım/                    # Inheritance örnekleri
├── 📁 kapsulleme/                 # Encapsulation örnekleri
├── 📁 metot_kesme/                # Method overriding
├── 📁 nesne-yonelimli-giris/      # OOP temel kavramları
├── 📁 proje/                      # wxWidgets GUI projesi
├── 📁 sablonlar/                  # Template örnekleri
├── 📁 sanal_metotlar/             # Virtual function örnekleri
├── 📁 soyutlama/                  # Abstract class örnekleri
├── 📁 StandartLib/                # Standard library kullanımı
└── 📁 statik_metot/               # Static method örnekleri
```

---

## 🧪 Proje Örnekleri ve Açıklamalar

### 🔧 Temel Konular

| Klasör | Açıklama | Örnek Kod |
|--------|----------|------------|
| **AkisKontrolleri** | if, switch, for, while döngüleri | Akış kontrol yapıları |
| **Onislemci** | #include, #define, header files | Ön işlemci direktifleri |
| **nesne-yonelimli-giris** | OOP temel kavramları | Sınıf ve nesne oluşturma |

### 🏗️ Nesne Yönelimli Programlama

| Klasör | Açıklama | Örnek Kod |
|--------|----------|------------|
| **classlar** | Temel sınıf yapıları | Constructor, destructor |
| **kapsulleme** | Private/public erişim | Getter/setter metodları |
| **kalıtım** | Inheritance örnekleri | Silah sınıfı hiyerarşisi |
| **cok_bicimlilik** | Polymorphism | Virtual function kullanımı |
| **soyutlama** | Abstract classes | Pure virtual functions |
| **sanal_metotlar** | Virtual functions | Runtime polymorphism |

### ⚡ Gelişmiş Özellikler

| Klasör | Açıklama | Örnek Kod |
|--------|----------|------------|
| **sablonlar** | Template programming | Generic functions |
| **istisnalar** | Exception handling | Try-catch blokları |
| **bellek_yonetimi** | Memory management | Dynamic allocation |
| **constlar** | Const correctness | Immutable data |
| **statik_metot** | Static members | Class-level data |

### 🔄 Fonksiyon ve Metodlar

| Klasör | Açıklama | Örnek Kod |
|--------|----------|------------|
| **asiri-yukleme** | Function overloading | Same name, different params |
| **inline-function** | Inline functions | Performance optimization |
| **geri_cagirma** | Callback functions | Function pointers |
| **arkadas_metot** | Friend functions | Cross-class access |
| **gizli_this** | This pointer | Self-reference in classes |

### 📚 Standart Kütüphane

| Klasör | Açıklama | Örnek Kod |
|--------|----------|------------|
| **StandartLib** | STL kullanımı | File I/O, strings |

### 🖥️ GUI Projesi

| Klasör | Açıklama | Teknolojiler |
|--------|----------|--------------|
| **proje** | wxWidgets GUI uygulaması | CMake, wxWidgets |

---

## 🛠️ Geliştirme Ortamı ve Gereksinimler

### 📋 Sistem Gereksinimleri

* **İşletim Sistemi:** Windows 10/11, Linux, macOS
* **C++ Derleyicisi:** GCC, Clang, MSVC (Visual Studio)
* **Build Sistemi:** CMake, Make, Visual Studio Project

### 🎯 Önerilen Araçlar

* **Kod Editörü:** Visual Studio Code, CLion, Code::Blocks
* **VS Code Eklentileri:** C++ Extension Pack, CMake Tools
* **Debugger:** GDB, LLDB, Visual Studio Debugger

### 🚀 Kurulum Adımları

1. **C++ Derleyicisi Kurulumu:**
   ```bash
   # Windows için MinGW
   winget install MinGW.MinGW
   
   # Linux için GCC
   sudo apt-get install build-essential
   
   # macOS için Clang
   xcode-select --install
   ```

2. **CMake Kurulumu:**
   ```bash
   # Windows
   winget install Kitware.CMake
   
   # Linux/macOS
   sudo apt-get install cmake
   ```

3. **wxWidgets Kurulumu (GUI projesi için):**
   ```bash
   # Windows
   vcpkg install wxwidgets
   
   # Linux
   sudo apt-get install libwxgtk3.0-dev
   ```

---

## 🚀 Projeyi Çalıştırma

### 📝 Basit C++ Programları

```bash
# Derleme
g++ -o program program.cpp

# Çalıştırma
./program
```

### 🏗️ CMake Projeleri

```bash
# Build dizini oluştur
mkdir build && cd build

# CMake konfigürasyonu
cmake ..

# Derleme
make

# Çalıştırma
./program
```

### 🖥️ wxWidgets GUI Projesi

```bash
cd proje
mkdir build && cd build
cmake ..
make
./EKRAN
```

---

## 📚 Öğrenme Yolu

### 🎯 Başlangıç Seviyesi
1. **AkisKontrolleri** - Temel programlama yapıları
2. **Onislemci** - Header files ve direktifler
3. **nesne-yonelimli-giris** - OOP kavramları

### 🚀 Orta Seviye
1. **classlar** - Sınıf tasarımı
2. **kapsulleme** - Veri gizleme
3. **kalıtım** - Kod yeniden kullanımı
4. **cok_bicimlilik** - Esnek programlama

### 🎓 İleri Seviye
1. **sablonlar** - Generic programming
2. **istisnalar** - Hata yönetimi
3. **bellek_yonetimi** - Performans optimizasyonu
4. **proje** - GUI uygulaması geliştirme

---

## ✍️ Katkı Sağlamak İstersen

Sen de BTK'da eğitim alıyorsan ya da kendi projeni paylaşmak istiyorsan:

1. Repo'yu forkla 🍴
2. Yeni klasör veya proje ekle
3. Açıklamalı şekilde pull request gönder 🚀

Bu repo, kodu sadece yazma değil, **anlama yolculuğuna** da destek vermek için burada!

---

## 🔧 Proje Bakımı

### 🧹 Temizlik
- Debug klasörleri ve .exe dosyaları `.gitignore` ile hariç tutulur
- Sadece kaynak kodlar ve proje dosyaları commit edilir
- Build artifacts otomatik olarak temizlenir

### 📝 Dokümantasyon
- Her klasörde açıklayıcı yorumlar
- README dosyası güncel tutulur
- Kod örnekleri detaylı açıklanır

---


## 🧠 Kapanış Notu

> "C++, seni düşünmeye zorlar. Bu da onu güzel kılar."
> — **Bjarne Stroustrup**

Kodla kal, üretmekten korkma 🚀


---

## 📊 Proje İstatistikleri

* **Toplam Klasör:** 25
* **C++ Dosyaları:** 25+
* **Proje Türleri:** Console, GUI, Library
* **Kapsanan Konular:** 20+ C++ konusu
* **Eğitim Seviyesi:** Başlangıç → İleri

---

## 🎯 Sonraki Hedefler

- [ ] Unit test ekleme
- [ ] Daha fazla GUI örneği
- [ ] STL container örnekleri
- [ ] Modern C++ (C++11/14/17/20) örnekleri
- [ ] Performance benchmarking
- [ ] Cross-platform build scripts
