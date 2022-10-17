// 1'den 63'e kadar olan sayýlar arasýnda istenilen sayýyý maksimum 6 seferde bulan programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 main(void)
{
int alt=1,ust=63,tahmin,sayac=0;
randomize();
int tutulan=(rand() % 63) + 1;
dnz:
tahmin=(alt+ust)/2;
sayac++;
 if(tahmin==tutulan)
 printf("tutulan :%d sayac %d",tutulan,sayac);
 else
 {
 if(tahmin>tutulan)
 ust=tahmin;
 else
 alt=tahmin;
 goto dnz;
 }
getch();
}


// çalýþtýramadým.
