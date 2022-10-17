// Girilen sayýnýn 5'in kuvveti olup olmadýðýný bulan programýn algoritma ve akýþ diyagramýný çiziniz.

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
