// Doðum tarihi girilen kiþinin yaþýný hesaplayan programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>

int main(){
    int dyil, yas, yil;
    printf("Bugunun Yilini Giriniz: ");
    scanf("%d", &yil);
    printf("Dogum Yilinizi Giriniz: ");
    scanf("%d",&dyil);
    yas = yil - dyil;
    printf("Yasiniz: %d", yas);
    getch();
}
