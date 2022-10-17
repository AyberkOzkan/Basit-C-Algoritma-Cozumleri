// 1'den 500'e kadar olan tamsayýlarýn toplamýný bulan programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int i = 1, toplam = 0;
    for (i = 1; i<=500 ;i++)
        toplam = toplam + i;
    printf("%d",toplam);
    getch();
}
