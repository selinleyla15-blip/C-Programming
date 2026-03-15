#include <stdio.h>

int main(void) {
    // 1. Mod (%) Alma - Tek / Cift Kontrolu
    int sayi;
    printf("Tek/Cift kontrolu icin bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    if (sayi % 2 == 0)
        printf("Sayi cifttir.\n\n");
    else
        printf("Sayi tektir.\n\n");

    // 2. Max - Min Bulma
    int s1, s2, max, min;
    printf("Max/Min bulmak icin 1. sayiyi giriniz: ");
    scanf("%d", &s1);
    printf("Max/Min bulmak icin 2. sayiyi giriniz: ");
    scanf("%d", &s2);
    
    if (s1 > s2) {
        max = s1;
        min = s2;
    } else {
        max = s2;
        min = s1;
    }
    printf("Buyuk olan = %d\nKucuk olan = %d\n\n", max, min);

    // 3. Vize ve Final Notu Hesaplama Sistemi
    int vize, final;
    float ort;
    
    printf("Vize notunu giriniz: ");
    scanf("%d", &vize);
    printf("Final notunu giriniz: ");
    scanf("%d", &final);
    
    ort = (vize * 0.4) + (final * 0.6);
    printf("Ortalamaniz: %.2f - ", ort);
    
    if (ort >= 60)
        printf("Tebrikler, GECTINIZ!\n");
    else
        printf("Maalesef KALDINIZ.\n");

    return 0;
}
