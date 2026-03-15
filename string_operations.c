#include <stdio.h>
#include <string.h>

int main() {
    // String Uzunluk ve Hafiza (strlen & sizeof)
    char isim[] = "SELIN";
    printf("Isim Uzunlugu: %lu\n", strlen(isim));
    printf("Hafizada Kapladigi Alan: %lu byte\n\n", sizeof(isim));

    // String Birlestirme (strcat) ve Kopyalama (strcpy)
    char metin1[50] = "Merhaba ";
    char metin2[] = "Dunya!";
    char metin3[50];
    
    strcat(metin1, metin2); // metin2'yi metin1'in ucuna ekle
    printf("Birlestirilmis Metin: %s\n", metin1);
    
    strcpy(metin3, metin1); // metin1 icerigini metin3'e kopyala
    printf("Kopyalanmis Metin: %s\n\n", metin3);

    // Escape Karakterleri (Ters Taksim)
    printf("Merhaba\tDunya!\n"); // \t tab boslugu
    printf("Ogretmen iceri girince \"Gunaydin\" diye seslendi.\n");
    printf("Ahmet'in telefonu hic susmuyordu.\n");

    return 0;
}
