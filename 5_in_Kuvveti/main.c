// Girilen say�n�n 5'in kuvveti olup olmad���n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int sayi;

    printf("Sayi Giriniz: ");
    scanf("%d",&sayi);
    if(sayi % 5 == 0){
            printf("Girilen %d sayisi 5'in Katidir.", sayi);
    }
    else{
        printf("Girilen %d sayisi 5'in Kati degildir.", sayi);
    }
    getch();
}
