// B�lme i�lemini ��karma kullanarak yapan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int bolen, bolunen, sonuc = 0;
    printf("Cikarma Islemini kullanarak bolmek istediginiz sayiyi giriniz: ");
    scanf("%d", &bolunen);
    printf("Bolen sayiyi giriniz: ");
    scanf("%d", &bolen);

    for(sonuc = 1;bolunen > bolen; sonuc++)

        bolunen = bolunen - bolen;
    printf("Sonuc: %d",sonuc);

    getch();



}
