/* Girilen kelimeyi tersten yazd�ran program�n algoritmas�n� ve ak��
diyagram�n� �iziniz.
*/

#include <stdio.h>
#include <conio.h>

int main(void){

    char klm[100];
    int i;
    printf("Tersten yazdirmak istediginiz kelimeyi giriniz: ");
    gets(klm);
    for(i = 0;i < 100; i++){
        if(klm[i] == '\0'){
            break;
        }
    }
    while(i > -1){
        printf("%c",klm[i]);
        i--;
    }
    getch();
}

/*
Kullan�c�dan bir kelime girmesi
istenir. Kelimenin harfleri tan�mlad���m�z
karakter dizisine girilir. Kelimenin son
karakteri girilip enter tu�una bas�ld���nda dizi
sonu olarak bir i�aret konulur (�\o� gibi). Dizi
sonu g�steren karakterin bulundu�u dizinin
indis de�eri 1 eksilterek, i=0 olana kadar her
dizi eleman� yazd�r�l�r. Program, dizinin ilk
eleman�n� da yazd�r�nca biter.
*/
