// 1'den 63'e kadar olan say�lar aras�nda istenilen say�y� maksimum 6 seferde bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

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


// �al��t�ramad�m.
