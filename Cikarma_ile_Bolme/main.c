// Bölme iþlemini çýkarma kullanarak yapan programýn algoritma ve akýþ diyagramýný çiziniz.

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
