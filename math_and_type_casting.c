#include <stdio.h>

int main(void) {
    // 1. Tam Sayilarla Islem ve Type Casting (Tip Donusumu)
    int s1, s2;
    float bolum, tam_sayi_ortalama;
    
    printf("1. tam sayiyi giriniz: ");
    scanf("%d", &s1);
    printf("2. tam sayiyi giriniz: ");
    scanf("%d", &s2);
    
    tam_sayi_ortalama = (float)(s1 + s2) / 2; // Daha kesin sonuc icin float'a cevirdik
    bolum = (float)s1 / s2; // Type casting islemi
    
    printf("Girdiginiz sayilarin bolumu = %f\n", bolum);
    printf("Girdiginiz sayilarin ortalamasi = %f\n\n", tam_sayi_ortalama);

    // 2. Bastan Float (Ondalikli) Olarak Alinan Sayilarin Ortalamasi
    float a, b, ondalikli_ortalama;
    
    printf("1. ondalikli sayiyi giriniz: ");
    scanf("%f", &a);
    printf("2. ondalikli sayiyi giriniz: ");
    scanf("%f", &b);
    
    ondalikli_ortalama = (a + b) / 2;
    printf("Ondalikli sayilarin ortalamasi = %f\n", ondalikli_ortalama);

    return 0;
}
