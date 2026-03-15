#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float kok1, kok2, imajiner;
    float diskriminant;

    printf("ax^2 + bx + c seklindeki ikinci derece denklemin a, b ve c katsayilarini giriniz: ");
    scanf("%f %f %f", &a, &b, &c);

    diskriminant = (b * b) - (4 * a * c);

    if (diskriminant > 0) {
        kok1 = (-b + sqrt(diskriminant)) / (2 * a);
        kok2 = (-b - sqrt(diskriminant)) / (2 * a);
        printf("Iki adet ayrik ve gercel kok bulunmaktadir: %.2f ve %.2f\n", kok1, kok2);
    } 
    else if (diskriminant == 0) {
        kok1 = kok2 = -b / (2 * a);
        printf("Birbirine esit iki adet gercel kok bulunmaktadir: %.2f\n", kok1);
    } 
    else {
        kok1 = -b / (2 * a);
        imajiner = sqrt(-diskriminant) / (2 * a);
        printf("Iki adet karmasik kok bulunmaktadir: %.2f + i%.2f ve %.2f - i%.2f\n", kok1, imajiner, kok1, imajiner);
    }

    return 0;
}
