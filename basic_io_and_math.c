#include <stdio.h>

int main() {
    // 1. Karakter Alma ve Yazdirma (getchar / putchar)
    char ogrenci_notu;
    printf("Ogrenci notunu giriniz: ");
    ogrenci_notu = getchar();
    
    printf("Girdiginiz not: ");
    putchar(ogrenci_notu);
    printf("\n\n");

    // 2. Dikdortgen - Alan ve Cevre Hesaplama
    float boy, en, cevre, alan;
    
    printf("Dikdortgenin uzunlugunu giriniz: ");
    scanf("%f", &boy);
    
    printf("Dikdortgenin genisligini giriniz: ");
    scanf("%f", &en);

    // Hesaplamalar
    cevre = 2 * (boy + en);
    printf("Dikdortgenin cevresi = %.2f birimdir\n", cevre);

    alan = boy * en;
    printf("Dikdortgenin alani = %.2f birim karedir\n", alan);

    return 0;
}
