// Girilen decimal (onluk) bir sayýnýn binary (ikilik) bir sayýya dönüþtüren programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int sayi, i = 0, toplam = 0;
    printf("Binary'e donusturmek istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);

    while(sayi >= 2){

        toplam = toplam + (sayi%2) * pow(10,i);
        sayi = sayi / 2;
        i++;
    }
    toplam = toplam + sayi * pow(10,i);
    printf("Sayinin Binary hali: %d",toplam);
    getch();
}

// 4 girince 99 5 girince 100 ???
