#include <stdio.h>

// Pointer kullanarak bir degiskenin degerini uzaktan (referans ile) degistirme
void degeriDegistir(int *x) {
    *x = 99; // Bize verilen bellek adresinin icindeki degeri 99 yap
}

int main(void) {
    printf("--- Pointer (Gosterici) Temelleri ---\n\n");
    
    int sayi = 10;
    int *p; // Pointer tanimlama (Sadece adres tutabilir)
    
    p = &sayi; // p'ye 'sayi' degiskeninin bellekteki adresini (&) ata
    
    printf("Sayinin ilk degeri: %d\n", sayi);
    printf("Sayinin bellekteki adresi: %p\n", (void*)p);
    printf("Pointer'in isaret ettigi deger: %d\n\n", *p);
    
    printf("Fonksiyon cagiriliyor...\n");
    degeriDegistir(&sayi); // Sayinin adresini fonksiyona yolluyoruz
    
    printf("Fonksiyon sonrasi sayinin yeni degeri: %d\n", sayi);
    
    return 0;
}
