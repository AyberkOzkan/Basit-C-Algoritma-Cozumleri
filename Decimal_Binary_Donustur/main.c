// Girilen decimal (onluk) bir say�n�n binary (ikilik) bir say�ya d�n��t�ren program�n algoritma ve ak�� diyagram�n� �iziniz.

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
