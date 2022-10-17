// Kullanýcýnýn girdiði iki sayýnýn karelerinin toplamýný görüntüleyen programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int sayi1, sayi2, top = 0;
    printf("Karelerini alip toplamak istediðiniz sayilari giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    top = (sayi1 * sayi1) + (sayi2 * sayi2);
    printf("%d", top);
    getch();
}

