// Do�um tarihi girilen ki�inin ya��n� hesaplayan program�n algoritma ve ak�� diyagram�n� �iziniz.

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
