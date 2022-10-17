// Girilen sayýnýn kaç basamaklý olduðunu söyleyen programýn algoritma ve akýþ diyagramýný çiziniz

#include <stdio.h>
#include <conio.h>


int main(){

    float sayi;
    int i = 0;
    printf("Basamak sayisinin bulunmasini istediginiz sayiyi giriniz: ");
    scanf("%f", &sayi);
    do{
        sayi = sayi / 10;
        i++;
    }while(sayi >= 9);
    printf("Sayi %d Basamaklidir.", i);
    getch();
}
