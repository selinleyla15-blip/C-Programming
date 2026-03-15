#include <stdio.h>

int main() {
    // 1. Kar / Zarar Hesaplama
    int maliyet, satis_bedeli, kar_zarar;
    
    printf("Maliyet bedelini giriniz: ");
    scanf("%d", &maliyet);
    printf("Satis bedelini giriniz: ");
    scanf("%d", &satis_bedeli);

    if (satis_bedeli > maliyet) {
        kar_zarar = satis_bedeli - maliyet;
        printf("Kar = %d\n", kar_zarar);
    } else if (maliyet > satis_bedeli) {
        kar_zarar = maliyet - satis_bedeli;
        printf("Zarar = %d\n", kar_zarar);
    } else {
        printf("Kar veya zarar edilmemistir.\n");
    }

    // 2. Switch-Case (Gunler)
    int gun;
    printf("\nHaftanin kacinci gunu oldugunu giriniz (1-7): ");
    scanf("%d", &gun);

    switch(gun) {
        case 1: printf("Pazartesi\n"); break;
        case 2: printf("Sali\n"); break;
        case 3: printf("Carsamba\n"); break;
        case 4: printf("Persembe\n"); break;
        case 5: printf("Cuma\n"); break;
        case 6: printf("Cumartesi\n"); break;
        case 7: printf("Pazar\n"); break;
        default: printf("Gecersiz deger!\n");
    }

    return 0;
}
