 /* 4 haneli bir say�n�n birler, onlar, y�zler ve binler hanesini bulan
program�n algoritma ve ak�� diyagram�n� �iziniz. */

#include <conio.h>
#include <stdio.h>

int main(void){

    int sayi, binler, yuzler, onlar, birler;
    printf("4 Basamakli Bir Sayi Giriniz: ");
    scanf("%d",&sayi);

    binler = sayi / 1000;              // Basamaklar� buldum.
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = sayi % 10;

    printf("Binler Basamagi: %d\nYuzler Basamagi: %d\n", binler, yuzler);
    printf("Onlar Basamagi: %d\nBirler Basamagi: %d\n", onlar, birler);
    getch();
}
