// Girilen say�n�n m�kemmel say� olup olmad���n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

// M�kemmel say�, kendisini tam b�len say�lar�n toplam�, kendine e�it olan say�lard�r.
// �rnek 28�dir. 1+2+4+7+14 = 28

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
