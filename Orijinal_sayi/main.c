/*
Girilen d�rt basamakl� say�lardan ilk iki basama�� ile son iki
basama��n�n toplam�n�n karesi, say�n�n kendine e�it olan say�lara
orijinal say� denir. Girilen say�n�n orijinal olup olmad���n� bulan
program�n algoritma ve ak�� diyagram�n� �iziniz.*/


#include <stdio.h>
#include <conio.h>

int main(void){

    int sayi, eski, son_bas, ilk_bas, toplam;
    printf("4 Basamakli bir sayi giriniz: ");
    scanf("%d",&sayi);
    eski = sayi;                                // Kar��la�t�rma da kullan�cam.
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
