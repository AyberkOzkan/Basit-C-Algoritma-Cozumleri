 /* 4 haneli bir sayýnýn birler, onlar, yüzler ve binler hanesini bulan
programýn algoritma ve akýþ diyagramýný çiziniz. */

#include <conio.h>
#include <stdio.h>

int main(void){

    int sayi, binler, yuzler, onlar, birler;
    printf("4 Basamakli Bir Sayi Giriniz: ");
    scanf("%d",&sayi);

    binler = sayi / 1000;              // Basamaklarý buldum.
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = sayi % 10;

    printf("Binler Basamagi: %d\nYuzler Basamagi: %d\n", binler, yuzler);
    printf("Onlar Basamagi: %d\nBirler Basamagi: %d\n", onlar, birler);
    getch();
}
