#include <stdio.h>

int main(void) {
    // 1. While Dongusu ile 1'den 10'a kadar saydirma
    int i = 1;
    printf("--- While Dongusu Ornegi ---\n");
    while (i <= 10) {
        printf("%d ", i);
        i++; // i'yi 1 arttir (i = i + 1 ile ayni)
    }
    printf("\n\n");

    // 2. Do-While Dongusu ile Girilen Sayiya Kadar Toplam Bulma
    int sayi, toplam = 0, sayac = 1;
    
    printf("--- Do-While Toplam Hesaplayici ---\n");
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    do {
        toplam += sayac; // toplam = toplam + sayac
        sayac++;
    } while (sayac <= sayi);
    
    printf("1'den %d'ye kadar olan sayilarin toplami = %d\n", sayi, toplam);

    return 0;
}
