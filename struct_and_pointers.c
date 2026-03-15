#include <stdio.h>
#include <string.h>

// Struct Tanimlama (Veritabani mantigi)
struct PersonelBilgisi {
    int yas;
    float maas;
    char isim[50];
    char cinsiyet[20];
};

int main() {
    // Struct Kullanimi
    struct PersonelBilgisi personel1;
    personel1.yas = 34;
    personel1.maas = 8500.0;
    strcpy(personel1.isim, "Ahmet Ahmetoglu");
    strcpy(personel1.cinsiyet, "Erkek");

    printf("--- Personel Bilgileri ---\n");
    printf("Personelin Adi: %s\n", personel1.isim);
    printf("Personelin Yasi: %d\n", personel1.yas);
    printf("Personelin Maasi: %.2f\n\n", personel1.maas);

    // Pointer (Isaretci) Mantigi
    int sayi = 10;
    int *isaretci = &sayi;

    printf("--- Pointer Isaretciler ---\n");
    printf("Sayi degiskeninin icerigi: %d\n", sayi);
    printf("Sayi degiskeninin adresi (Ampersand &): %p\n", &sayi);
    printf("Isaretcinin isaret ettigi deger (Asterisk *): %d\n", *isaretci);

    return 0;
}
