#include <stdio.h>

int main(void) {
    // 1. For Dongusu ile Faktoriyel Hesaplama
    int n, i;
    long long faktoriyel = 1; // Buyuk sonuclar icin long long kullandik
    
    printf("--- Faktoriyel Hesaplama ---\n");
    printf("Faktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; ++i) {
        faktoriyel *= i;
    }
    printf("%d! = %lld\n\n", n, faktoriyel);

    // 2. Ic Ice For Donguleri (Nested Loops) ile Ucgen Cizimi
    int satir, j, k;
    printf("--- Yildizlardan Ucgen Cizimi ---\n");
    printf("Kac satir olsun? ");
    scanf("%d", &satir);
    
    for (j = 1; j <= satir; ++j) {
        for (k = 1; k <= j; ++k) {
            printf("* ");
        }
        printf("\n"); // Her satir bittiginde alt satira gec
    }

    return 0;
}
