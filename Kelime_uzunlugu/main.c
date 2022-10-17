/* .Girilen bir kelimenin uzunlu�unu bulan program�n algoritma ve ak��
diyagram�n� �iziniz. */

#include <conio.h>
#include <stdio.h>

int main(void){

    char klm[100];
    int i;
    printf("Uzunlugunu bulmak istediginiz kelimeyi giriniz: ");
    gets(klm);
    for (i = 0; i < 100; i++){
            if(klm[i]== '\0'){
                printf("Kelimenin uzunlugu: %d'dir", i);
                break;
            }
    }
    getch();
}


/*
Bu soruda bir karakter dizisi
tan�ml�yoruz. Kelimeyi de okutmak i�in gets()
fonksiyonunu kullabiliriz (c �de) veya
kullan�c�n�n bo� bir de�er girmesi yerine
karakterler okutulup diziye at�labilir. 100
eleman tan�mlamam�z�n sebebi dizi
tan�mlan�rken, dinamik dizi
tan�mlamad���m�zda her zaman ka� elemanl�
oldu�unu derleyiciye belirtmektir. Biz burada
onun i�in 100 elemanl� demeyi tercih ettik.
Sonu�ta NULL girince d�ng� sonlanacakt�r.
Gets() ile sisteme kelime okutursak, son
karakteri girdikten sonra dizinin sonu, kendine
has bir i�aret koyar(�\o� gibi). Bu da bize
dizinin sonuna geldi�imizi g�sterir. */
