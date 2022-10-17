// Dairenin alanýný ve çevresini bulan programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>
#include <math.h>

main(void){

    float pi = 3.14, alan, cevre, r;

    printf("Dairenin alanini ve cevresini bulmak icin yaricapi(r) giriniz: ");
    scanf("%f",&r);

    alan = pi * pow(r,2);
    cevre = 2 * pi * r;

    printf("\nDairenin Alani: %f\nDairenin Cevresi: %f",alan, cevre);
    getch();
}
