#include <stdio.h>

// 1. Parametresiz ve geriye deger dondurmeyen fonksiyon
void hataMesaji(void) {
    printf("Sistem Hatasi: Baglanti kurulamadi!\n");
}

// 2. Parametre alan ve geriye int donduren fonksiyonlar
int topla(int x, int y) {
    return x + y;
}

int carp(int a, int b) {
    return a * b;
}

// 3. Recursive (Ozyineli) Fonksiyon - Faktoriyel Hesaplama
int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * faktoriyel(n - 1);
}

int main(void) {
    printf("--- Fonksiyonlar ve Rekursif Islemler ---\n\n");
    
    hataMesaji(); // Void fonksiyonu cagirma
    
    int toplamSonuc = topla(15, 25);
    printf("\n15 + 25 = %d\n", toplamSonuc);
    
    int carpimSonuc = carp(4, 8);
    printf("4 * 8 = %d\n", carpimSonuc);
    
    int fakSonuc = faktoriyel(5);
    printf("5! (Faktoriyel) = %d\n", fakSonuc);
    
    return 0;
}
