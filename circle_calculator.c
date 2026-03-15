#include <stdio.h>

int main(void) {
    float alan, cevre, r;
    
    printf("--- Daire Alan ve Cevre Hesaplayici ---\n");
    printf("Yaricapi giriniz: ");
    scanf("%f", &r);
    
    alan = 3.14 * r * r;
    cevre = 2 * 3.14 * r;
    
    printf("Dairenin Alani = %f\n", alan);
    printf("Dairenin Cevresi = %f\n", cevre);
    
    return 0;
}
