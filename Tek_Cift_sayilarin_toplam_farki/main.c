/* 1 ile 500 arasýndaki tam sayýlardan tek sayýlarýn toplamý ile çift
sayýlarýn toplamýnýn farký negatif mi, pozitif mi olduðunu bulan
programýn algoritma ve akýþ diyagramýný çiziniz. */


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
        printf("Sayilarýn Farki Pozitiftir.");
    }
    getch();
}
