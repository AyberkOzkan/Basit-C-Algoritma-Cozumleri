// Kenarlar� A,B,C,D olan bir d�rtgenin kare olup olmad���n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

main(void){

    int a, b, c, d;
    printf("Dortgenin kenarlarini giriniz: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (a + b == c + d){
        printf("Bu bir karedir.");
    }
    else{
        printf("Kare degildir.");
    }
    getch();
}
