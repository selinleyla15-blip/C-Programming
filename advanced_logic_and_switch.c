#include <stdio.h>

int main(void) {
    // 1. Uc Sayi Arasindan En Buyugu Bulma
    int a, b, c, en_buyuk;
    printf("En buyugu bulmak icin 3 adet sayi giriniz (Aralarinda bosluk birakarak): ");
    scanf("%d %d %d", &a, &b, &c);
    
    en_buyuk = a;
    if (b > en_buyuk) en_buyuk = b;
    if (c > en_buyuk) en_buyuk = c;
    printf("En buyuk sayi = %d\n\n", en_buyuk);

    // 2. Parcali Fonksiyon Hesaplama (x durumuna gore y degisimi)
    int x, y;
    printf("Fonksiyon icin bir X degeri giriniz: ");
    scanf("%d", &x);
    
    if (x < 0)
        y = 1;
    else if (x >= 0 && x <= 2)
        y = x;
    else if (x > 2 && x <= 4)
        y = 3;
    else
        y = 4 - x;
        
    printf("X = %d icin Y sonucu = %d\n\n", x, y);

    // 3. Switch-Case ile Islem Secimi
    int num1, num2, num3, islem_no, sonuc;
    printf("Islem yapilacak 3 sayiyi giriniz: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("Islem No Giriniz (1: Toplama, 2: Cikarma, 3: Carpma): ");
    scanf("%d", &islem_no);
    
    switch (islem_no) {
        case 1:
            sonuc = num1 + num2 + num3;
            printf("Sonuc (Toplama) = %d\n", sonuc);
            break;
        case 2:
            sonuc = num1 - num2 - num3;
            printf("Sonuc (Cikarma) = %d\n", sonuc);
            break;
        case 3:
            sonuc = num1 * num2 * num3;
            printf("Sonuc (Carpma) = %d\n", sonuc);
            break;
        default:
            printf("Gecersiz islem numarasi girdiniz!\n");
            return 1; // Hata kodu dondurerek programi bitir
    }

    return 0;
}
