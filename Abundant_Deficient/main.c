// Girilen say�n�n abundant (g��l�) say� m� ya da Deficient (g��s�z) say� m� oldu�unu bulan program�n algoritma ve ak�� diyagram�n� �iziniz.


#include <stdio.h>
#include <conio.h>

int main(){

    int sayac = 2, sayi, bolen = 1;

    printf("Bir Sayi Giriniz: ");
    scanf("%d",&sayi);
    while(sayac < sayi){
            if (sayi % sayac == 0)
                bolen = bolen + sayac;
                sayac ++;

    }
    if (bolen > sayi){
        printf("Abundant Sayi");
    }
    else
        printf("Deficient Sayi");
    getch();
}
