/*
Girilen dört basamaklý sayýlardan ilk iki basamaðý ile son iki
basamaðýnýn toplamýnýn karesi, sayýnýn kendine eþit olan sayýlara
orijinal sayý denir. Girilen sayýnýn orijinal olup olmadýðýný bulan
programýn algoritma ve akýþ diyagramýný çiziniz.*/


#include <stdio.h>
#include <conio.h>

int main(void){

    int sayi, eski, son_bas, ilk_bas, toplam;
    printf("4 Basamakli bir sayi giriniz: ");
    scanf("%d",&sayi);
    eski = sayi;                                // Karþýlaþtýrma da kullanýcam.
    son_bas = sayi % 100;
    ilk_bas = sayi / 100;
    toplam = ilk_bas + son_bas;
    toplam = toplam * toplam;
    if (eski == toplam){
        printf("Girilen sayi Orijinal Sayidir.");
    }
    else {
        printf("Girilen sayi Orijinal Sayi Degildir!");
    }
    getch();
}
