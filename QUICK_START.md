# 🚀 BTK C++ Hızlı Başlangıç Rehberi

Bu rehber, BTK C++ projelerini hızlıca çalıştırmanızı sağlar. Detaylı bilgi için diğer dokümantasyon dosyalarını inceleyin.

## ⚡ 5 Dakikada İlk Program

### 1️⃣ **Gereksinimleri Kontrol Edin**
```bash
# C++ derleyicisi var mı?
g++ --version
# veya
clang++ --version
```

### 2️⃣ **İlk Programı Çalıştırın**
```bash
# AkisKontrolleri klasörüne gidin
cd AkisKontrolleri

# Derleyin
g++ -o program AkisKontrolleri.cpp

# Çalıştırın
./program
```

### 3️⃣ **Başarı! 🎉**
İlk C++ programınız çalıştı! Şimdi diğer örnekleri deneyebilirsiniz.

---

## 🔧 Hızlı Kurulum

### Windows
```bash
# MinGW kurulumu
winget install MinGW.MinGW

# PATH'e ekleyin
# C:\MinGW\bin klasörünü PATH'e ekleyin
```

### Linux
```bash
sudo apt-get update
sudo apt-get install build-essential
```

### macOS
```bash
xcode-select --install
```

---

## 📁 Hızlı Proje Seçimi

### 🥇 **Başlangıç Seviyesi**
- **AkisKontrolleri** - İlk program
- **Onislemci** - Header files
- **nesne-yonelimli-giris** - OOP temelleri

### 🥈 **Orta Seviye**
- **classlar** - Sınıf yapıları
- **kalıtım** - Inheritance
- **cok_bicimlilik** - Polymorphism

### 🥉 **İleri Seviye**
- **sablonlar** - Templates
- **istisnalar** - Exception handling
- **proje** - GUI uygulaması

---

## 🚀 Hızlı Komutlar

### 📝 **Basit Derleme**
```bash
g++ -o program program.cpp
./program
```

### 🏗️ **CMake Projeleri**
```bash
mkdir build && cd build
cmake ..
make
./program
```

### 🖥️ **Visual Studio Projeleri**
- `.vcxproj` dosyasını Visual Studio'da açın
- F5 ile çalıştırın

---

## 🎯 Hızlı Öğrenme Yolu

### 📅 **1. Gün: Temel Programlama**
```bash
cd AkisKontrolleri
g++ -o test AkisKontrolleri.cpp
./test
```

### 📅 **2. Gün: OOP Temelleri**
```bash
cd classlar
g++ -o test class.cpp
./test
```

### 📅 **3. Gün: Inheritance**
```bash
cd kalıtım
g++ -o test kalıtım.cpp
./test
```

---

## 🔍 Hızlı Sorun Giderme

### ❌ **"g++ command not found"**
```bash
# Windows: MinGW kurun
# Linux: build-essential kurun
# macOS: Xcode kurun
```

### ❌ **"Permission denied"**
```bash
chmod +x program
./program
```

### ❌ **"Cannot open file"**
```bash
# Dosya yolunu kontrol edin
ls -la
pwd
```

---

## 📚 Hızlı Referans

### 🔧 **Temel Komutlar**
```bash
# Derleme
g++ -o output input.cpp

# Debug bilgisi ile
g++ -g -o output input.cpp

# Optimizasyon ile
g++ -O2 -o output input.cpp

# C++11 standardı ile
g++ -std=c++11 -o output input.cpp
```

### 📁 **Dosya Yapısı**
```
btk-c++/
├── 📁 AkisKontrolleri/     # İlk program
├── 📁 classlar/             # Sınıflar
├── 📁 kalıtım/              # Inheritance
└── 📁 proje/                # GUI projesi
```

---

## 🎮 Hızlı Test

### ✅ **Sistem Testi**
```bash
# Test programı oluşturun
echo '#include <iostream>
int main() {
    std::cout << "C++ çalışıyor!" << std::endl;
    return 0;
}' > test.cpp

# Derleyin ve çalıştırın
g++ -o test test.cpp
./test
```

### 🎯 **Beklenen Çıktı**
```
C++ çalışıyor!
```

---

## 🚀 Sonraki Adımlar

### 📖 **Detaylı Öğrenme**
1. `README.md` - Ana dokümantasyon
2. `LEARNING_PATH.md` - Öğrenme yolu
3. `PROJECT_STRUCTURE.md` - Proje yapısı

### 🎯 **Pratik Yapma**
- Her klasördeki örnekleri deneyin
- Kodu değiştirin ve test edin
- Kendi örneklerinizi yazın

### 🌟 **İleri Seviye**
- GUI projesini geliştirin
- Modern C++ özelliklerini öğrenin
- STL container'ları kullanın

---

## 💡 Hızlı İpuçları

### ⚡ **Performans**
- `-O2` flag'i ile optimize edin
- Debug için `-g` kullanın
- Release için `-O3` kullanın

### 🔍 **Debugging**
- `gdb` ile debug yapın
- `valgrind` ile memory leak kontrolü
- `strace` ile system call takibi

### 📝 **Kod Kalitesi**
- `clang-format` ile format
- `clang-tidy` ile static analysis
- `cppcheck` ile code review

---

## 🎉 Başarı!

Artık BTK C++ projelerini kullanmaya hazırsınız! 

### 🚀 **Hemen Başlayın:**
```bash
cd AkisKontrolleri
g++ -o ilk_program AkisKontrolleri.cpp
./ilk_program
```

### 📚 **Daha Fazla Bilgi:**
- [README.md](README.md) - Ana dokümantasyon
- [LEARNING_PATH.md](LEARNING_PATH.md) - Öğrenme yolu
- [PROJECT_STRUCTURE.md](PROJECT_STRUCTURE.md) - Proje detayları

**Kodla kal, üretmekten korkma! 🚀**
