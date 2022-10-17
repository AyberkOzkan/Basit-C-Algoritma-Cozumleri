// Girilen sayýnýn istenilen sayýya göre mod iþlemini yaptýran programýn algoritma ve akýþ diyagramýný çiziniz.

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
