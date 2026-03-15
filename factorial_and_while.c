#include <stdio.h>

int main() {
    // 1. While dongusu ile Faktoriyel Hesaplama
    int n, faktoriyel = 1;
    
    printf("Faktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d", &n);
    
    int orijinal_sayi = n; // Ciktida gostermek icin sayiyi sakliyoruz
    
    while (n > 0) {
        faktoriyel *= n;
        n--;
    }
    printf("%d! = %d\n\n", orijinal_sayi, faktoriyel);

    // 2. Do-While Dongusu Ornegi
    // (Sart saglanmasa bile en az 1 kez calisan dongu)
    int sayac = 1;
    printf("--- Do-While Ornegi ---\n");
    do {
        printf("Sayac Degeri: %d\n", sayac);
        sayac++;
    } while (sayac <= 3);

    return 0;
}
