// �ki say�n�n toplam�n� veren program�n algoritma ve ak�� diyagram�n� �iziniz.



#include <stdio.h>
#include <conio.h>

int main(){
    int a, b, c;                    // 3 tane de�i�ken tan�mlad�m.
    printf("1. Sayiyi Giriniz: ");  // Kullan�c�dan 1. Say�y� girmesini istedim.
    scanf("%d",&b);                 // 1. say�y� b de�i�kenine atad�m.
    printf("2. Sayiyi Giriniz: ");  // Kullan�c�dan 2. Say�y� girmesini istedim.
    scanf("%d",&a);                 // 2. say�y� a de�i�kenine atad�m.
    c = b + a;                      // 2 Say�n�n toplam formulu
    printf("Toplam: %d", c);        // Toplam� yazd�rd�m.
    getch();

}
