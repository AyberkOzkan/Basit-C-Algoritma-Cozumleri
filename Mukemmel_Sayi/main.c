// Girilen sayýnýn mükemmel sayý olup olmadýðýný bulan programýn algoritma ve akýþ diyagramýný çiziniz.

// Mükemmel sayý, kendisini tam bölen sayýlarýn toplamý, kendine eþit olan sayýlardýr.
// Örnek 28’dir. 1+2+4+7+14 = 28

#include <stdio.h>
#include <conio.h>
main()
{
 int sayi,sayac=2,top=1;
 scanf("%d",&sayi);
 dnz:
 if(sayi%sayac==0)
 {
 top=top+sayac;
 sayac++;
 }
 else
 sayac++;
 if(sayac>sayi/2)
 {
 if(top==sayi)
 printf("mukemmeldir");
 else
 printf("mukemmel degildir");
 }
 else
 goto dnz;
 getch();
}
