// Klavyeden girilen bir say�n�n negatif, pozitif veya 0 olup olmad���n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz

#include <stdio.h>
#include <conio.h>

int main(){
    int sayi;

    printf("Sayinin Pozitif - Negatif veya 0 olma durumunu ogrenmek icin\nLutfen sayiyi giriniz: ");
    scanf("%d",&sayi);

    if(sayi > 0){
        printf("Girilen sayi pozitiftir.");
    }
        else {
                if(sayi < 0){
                    printf("Girilen sayi negatiftir.");
                }
                else {
                printf("Girilen sayi 0'dir.");
        }
        }

    getch();
}
