#include <stdio.h>

int main() {
    int matris[3][3];
    int i, j;

    // Kullanicidan Matris elemanlarini alma
    printf("3x3 Matris elemanlarini giriniz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    // Matrisi duzgun bir tablo (Grid) halinde ekrana yazdirma
    printf("\n--- Olusturulan Matris ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matris[i][j]); // \t ile aralarina sekme boslugu koyar
        }
        printf("\n"); // Her satirdan sonra alt satira gecer
    }

    return 0;
}
