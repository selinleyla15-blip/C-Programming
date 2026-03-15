#include <stdio.h>

// 1. Deger dondurmeyen ve parametre almayan fonksiyon (Void)
void mesaj_yaz() {
    printf("C Programlama Diline Hos Geldiniz Komutan!\n");
    printf("------------------------------------------\n");
}

// 2. Parametre alan ve deger donduren fonksiyon (Toplama)
int topla(int a, int b) {
    return a + b;
}

// 3. Parametre alan ve deger donduren fonksiyon (Kare Alma)
int kare_al(int x) {
    return x * x;
}

int main() {
    // Fonksiyonlari cagirma (calling)
    mesaj_yaz();

    int sayi1, sayi2, toplam_sonuc;
    printf("Toplamak icin iki sayi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);
    
    toplam_sonuc = topla(sayi1, sayi2);
    printf("Girdiginiz sayilarin toplami: %d\n\n", toplam_sonuc);

    int sayi3, kare_sonuc;
    printf("Karesini almak istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi3);
    
    kare_sonuc = kare_al(sayi3);
    printf("%d sayisinin karesi: %d\n", sayi3, kare_sonuc);

    return 0;
}
