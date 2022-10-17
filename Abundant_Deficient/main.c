// Girilen sayýnýn abundant (güçlü) sayý mý ya da Deficient (güçsüz) sayý mý olduðunu bulan programýn algoritma ve akýþ diyagramýný çiziniz.


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
