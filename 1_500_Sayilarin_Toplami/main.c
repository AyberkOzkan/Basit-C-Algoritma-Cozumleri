// 1'den 500'e kadar olan tamsay�lar�n toplam�n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int i = 1, toplam = 0;
    for (i = 1; i<=500 ;i++)
        toplam = toplam + i;
    printf("%d",toplam);
    getch();
}
