// Verilen y�l�n art�k y�l olup olmad���n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

main(void){

    int yil;
    printf("Yili giriniz: ");
    scanf("%d",&yil);

    if (yil % 4 == 0){
        printf("Girilen Yil Artik Yildir.");
    }
    else{
        printf("Artik yil degildir.");
    }
    getch();
}
