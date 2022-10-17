// 1'den 100'e kadar olan sayýlarýnýn küplerinin toplamýný bulan programýn algoritma ve akýþ diyagramýný çiziniz

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
