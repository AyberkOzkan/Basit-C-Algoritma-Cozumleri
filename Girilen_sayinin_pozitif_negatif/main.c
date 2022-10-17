// Klavyeden girilen bir sayýnýn negatif, pozitif veya 0 olup olmadýðýný bulan programýn algoritma ve akýþ diyagramýný çiziniz

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
