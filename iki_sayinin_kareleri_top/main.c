// Kullan�c�n�n girdi�i iki say�n�n karelerinin toplam�n� g�r�nt�leyen program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int sayi1, sayi2, top = 0;
    printf("Karelerini alip toplamak istedi�iniz sayilari giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    top = (sayi1 * sayi1) + (sayi2 * sayi2);
    printf("%d", top);
    getch();
}

