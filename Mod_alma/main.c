// Girilen say�n�n istenilen say�ya g�re mod i�lemini yapt�ran program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int sayi1, sayi2;

    printf("Modunu almak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("Mod: ");
    scanf("%d",&sayi2);
    while(sayi1 >= sayi2){
        sayi1 = sayi1 - sayi2;
    }
    printf("Sonuc: %d",sayi1);
    getch();
}
