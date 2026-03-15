#include <stdio.h>

int main(void) {
    int notlar[5]; // 5 elemanli bir tam sayi dizisi olusturduk
    int i, toplam = 0;
    float ortalama;

    printf("--- Dizi (Array) ile Ortalama Hesaplama ---\n");
    
    // For dongusu ile diziye disaridan eleman ekleme
    for (i = 0; i < 5; i++) {
        printf("%d. ogrencinin notunu giriniz: ", i + 1);
        scanf("%d", &notlar[i]);
    }

    // Dizideki elemanlari toplayip ortalama bulma
    for (i = 0; i < 5; i++) {
        toplam += notlar[i];
    }
    
    ortalama = (float)toplam / 5.0; // Daha hassas sonuc icin float'a cevirdik (Type Casting)
    
    printf("\nGirilen notlarin toplami = %d\n", toplam);
    printf("Sinifin not ortalamasi = %.2f\n", ortalama);

    return 0;
}
