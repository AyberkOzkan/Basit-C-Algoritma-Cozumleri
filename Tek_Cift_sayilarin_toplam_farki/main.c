/* 1 ile 500 aras�ndaki tam say�lardan tek say�lar�n toplam� ile �ift
say�lar�n toplam�n�n fark� negatif mi, pozitif mi oldu�unu bulan
program�n algoritma ve ak�� diyagram�n� �iziniz. */


#include <conio.h>
#include <stdio.h>

int main(){

    int sayi, tek = 0, cift = 0;

    for (sayi = 500; sayi >= 1; sayi--){
            if(sayi % 2 == 0){
                    cift = cift + sayi;
            }
            else{
                tek = tek + sayi;
            }
        printf("%d tek sayilarin toplami||%d cift sayilarin toplami\n",tek ,cift);
    }
    if((tek - cift) < 0){
       printf("Sayilarin Farki Negatiftir.");
    }
    else{
        printf("Sayilar�n Farki Pozitiftir.");
    }
    getch();
}
