// Girilen say�n�n ka� basamakl� oldu�unu s�yleyen program�n algoritma ve ak�� diyagram�n� �iziniz

#include <stdio.h>
#include <conio.h>


int main(){

    float sayi;
    int i = 0;
    printf("Basamak sayisinin bulunmasini istediginiz sayiyi giriniz: ");
    scanf("%f", &sayi);
    do{
        sayi = sayi / 10;
        i++;
    }while(sayi >= 9);
    printf("Sayi %d Basamaklidir.", i);
    getch();
}
