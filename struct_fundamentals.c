#include <stdio.h>
#include <string.h> // strcpy kullanabilmek icin gerekli

// Struct (Yapi) tanimlama - Kendi veri tipimizi olusturuyoruz
struct Ogrenci {
    char ad[50];
    char bolum[50];
    int yas;
    float ortalama;
};

int main(void) {
    printf("--- Struct (Yapi) Kullanimi ---\n\n");
    
    // 'Ogrenci' tipinde 'ogr1' adinda bir degisken olusturma
    struct Ogrenci ogr1;
    
    // Struct elemanlarina veri atama
    strcpy(ogr1.ad, "Ahmet Yilmaz"); // Metin atamalari icin strcpy sarttir
    strcpy(ogr1.bolum, "Siber Guvenlik Uzmanligi");
    ogr1.yas = 21;
    ogr1.ortalama = 3.85;
    
    // Struct verilerini ekrana yazdirma
    printf("Ogrenci Adi    : %s\n", ogr1.ad);
    printf("Bolumu         : %s\n", ogr1.bolum);
    printf("Yasi           : %d\n", ogr1.yas);
    printf("Not Ortalamasi : %.2f\n", ogr1.ortalama);
    
    return 0;
}
