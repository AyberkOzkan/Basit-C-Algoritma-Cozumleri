// 1'den 100'e kadar olan say�lar�n�n k�plerinin toplam�n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int sayi, top = 0;
    for(sayi = 1; sayi <= 101; sayi++)
        printf("%d\n",sayi);
        top = top + (sayi * sayi * sayi);


    printf("1 ile 100 arasi sayilarin toplami: %d\n", top);
    getch();
}
