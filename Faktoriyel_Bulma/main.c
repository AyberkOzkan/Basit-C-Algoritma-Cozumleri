// Girilen sayýnýn faktöriyelini bulan programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int fktryl = 1, sayi;
    printf("Faktoriyelini Bulmak Istediðiniz Sayiyi Giriniz: ");
    scanf("%d",&sayi);
    for(sayi; sayi > 1; sayi--)
            fktryl = fktryl * sayi;
    printf("Faktoriyel: %d",fktryl);
    getch();
}
