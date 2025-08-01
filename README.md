# 💻 BTK Akademi - C++ Eğitim Projeleri

Merhaba! Bu repo, [BTK Akademi](https://www.btkakademi.gov.tr/) üzerinden aldığım **C++ ile Programlamaya Giriş** eğitiminde öğrendiklerimi pratiğe dökmek için hazırladığım tüm kodları ve mini projeleri içermektedir. 👨‍💻  

Aşağıda hem proje dizinine hem de C++ hakkında temel bilgilere yer verdim. Kodu ezberlemeye değil, **anlamaya** çalışanlara özel notlar içerir. 🚀

---

## 🔍 C++ Nedir?

**C++**, 1980’lerde Bjarne Stroustrup tarafından geliştirilen, sistem programlama, oyun geliştirme ve performans odaklı yazılım geliştirme alanlarında yaygın olarak kullanılan, genel amaçlı bir programlama dilidir. C dilinin üzerine nesne yönelimli programlama (OOP) özellikleri eklenerek oluşturulmuştur.

### ⚙️ Özellikleri:
- Derlemeli ve yüksek performanslıdır.
- Donanım düzeyine yakın kontrol sunar (pointer’lar, bellek yönetimi).
- OOP desteği sayesinde büyük projelerde okunabilir ve sürdürülebilir kod yazılabilir.
- STL (Standard Template Library) gibi hazır veri yapıları ve algoritmalar sunar.

---

## 🧠 C++ ile Tanış: Temel Kavramlar

### 🧮 Değişkenler ve Veri Tipleri
```cpp
int yas = 23;
float boy = 1.75;
char harf = 'A';
bool aktif = true;
🔁 Koşullar ve Döngüler
cpp
Kopyala
Düzenle
if (yas >= 18) {
    cout << "Reşitsiniz.";
}

for (int i = 0; i < 10; i++) {
    cout << i << endl;
}
🧮 Fonksiyonlar
cpp
Kopyala
Düzenle
int topla(int a, int b) {
    return a + b;
}
💡 Pointer Kullanımı
cpp
Kopyala
Düzenle
int x = 10;
int* ptr = &x;
cout << *ptr; // 10
🧱 Sınıflar (Classes) ve Nesneler
cpp
Kopyala
Düzenle
class Araba {
  public:
    string marka;
    int hiz;
    
    void calistir() {
        cout << "Araba çalışıyor!";
    }
};
🧪 Bu Repoda Neler Var?
Bu repo, temel konulardan ileri düzeye kadar adım adım ilerleyen kod dosyaları içerir. Her klasör, bir eğitim modülüne karşılık gelir.

📁 Klasör Yapısı
bash
Kopyala
Düzenle
cpp-btk-projects/
├── 01-hello-world/            # İlk C++ programı
├── 02-variables/              # Değişkenler ve veri tipleri
├── 03-conditionals/           # if, else, switch
├── 04-loops/                  # for, while, do-while
├── 05-functions/              # Fonksiyon tanımları
├── 06-arrays-vectors/         # Dizi ve vektör kullanımı
├── 07-pointers/               # Pointer örnekleri
├── 08-oop/                    # Sınıflar ve nesneler
├── 09-file-operations/        # Dosya işlemleri
└── 10-mini-projects/          # Uygulama örnekleri
🧪 Proje Örnekleri
Proje	Açıklama
calculator.cpp	4 işlem yapabilen basit hesap makinesi
student-system.cpp	Öğrenci bilgilerini sınıf yapısıyla tutma
file-logger.cpp	Dosyaya veri yazma ve okuma örneği
pointer-swap.cpp	Pointer kullanarak iki değişkenin yerini değiştirme
vector-sort.cpp	Vektör içinde sıralama yapan örnek

🧰 Geliştirme Ortamı ve Gereksinimler
C++ Derleyicisi: GCC / Clang / MSVC

Kod Editörü: Visual Studio Code / CLion / Code::Blocks

C++ Extension Pack for VS Code

✍️ Katkı Sağlamak İstersen
Sen de BTK'da eğitim alıyorsan ya da kendi projeni paylaşmak istiyorsan:

Repo’yu forkla 🍴

Yeni klasör ya da proje ekle

Açıklamalı bir şekilde pull request gönder 🚀

Kodu sadece yazma değil, anlama yolculuğuna destek ver!

📞 İletişim
Her türlü soru veya öneri için bana ulaşabilirsin:

📧 E-posta: codewithyunus@example.com

🧠 GitHub: @bahattinyunuscetin

📸 Instagram: @codewithyunus

🧠 Kapanış Notu
“C++, seni düşünmeye zorlar. Bu da onu güzel kılar.”
— Bjarne Stroustrup

Kodla kal, üretmekten korkma 🚀
— Bahattin Yunus Çetin

