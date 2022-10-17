/* Girilen kelimeyi tersten yazdýran programýn algoritmasýný ve akýþ
diyagramýný çiziniz.
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
Kullanýcýdan bir kelime girmesi
istenir. Kelimenin harfleri tanýmladýðýmýz
karakter dizisine girilir. Kelimenin son
karakteri girilip enter tuþuna basýldýðýnda dizi
sonu olarak bir iþaret konulur (‘\o’ gibi). Dizi
sonu gösteren karakterin bulunduðu dizinin
indis deðeri 1 eksilterek, i=0 olana kadar her
dizi elemaný yazdýrýlýr. Program, dizinin ilk
elemanýný da yazdýrýnca biter.
*/
