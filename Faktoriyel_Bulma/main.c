// Girilen say�n�n fakt�riyelini bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int fktryl = 1, sayi;
    printf("Faktoriyelini Bulmak Istedi�iniz Sayiyi Giriniz: ");
    scanf("%d",&sayi);
    for(sayi; sayi > 1; sayi--)
            fktryl = fktryl * sayi;
    printf("Faktoriyel: %d",fktryl);
    getch();
}
