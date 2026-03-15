#include <stdio.h>

int main() {
    // Goto deyimi ile dongu olusturma
    int i = 1;
    
    printf("--- Goto Ile Dongu ---\n");
    baslangic: // Burasi bir etikettir (label)
    
    printf("%d\n", i);
    i++;
    
    if (i <= 5) {
        goto baslangic; // Sart saglaniyorsa etikete geri don
    }

    printf("\n--- Break ve Continue Mantigi ---\n");
    for(int j = 1; j <= 5; j++) {
        if (j == 3) {
            printf("3 rakami atlandi (continue)...\n");
            continue; // 3'u atlar, donguye devam eder
        }
        if (j == 5) {
            printf("5 rakamina ulasildi, dongu kiriliyor (break)...\n");
            break; // Donguyu tamamen bitirir
        }
        printf("Deger: %d\n", j);
    }

    return 0;
}
