// 10 ile 1000 aras�ndaki tam kare say�lar� ekrana yazd�ran program�n algoritma ve ak�� diyagram�n� �iziniz.

// Bu soru kolay bir �rnek olarak
//kar��m�za ��k�yor. 10 ile 100 aras�ndaki tam
//kare say�lar 16 ile ba�layaca��ndan saya� da
//4�ten ba�lar. 4�ten k���k olanlara gerek
//yoktur. ��nk� 3*3 �rnek olarak 9�dur. 10 ile
//100 aras�nda de�ildir.

#include <stdio.h>
#include <conio.h>

int main(){
    int sayac;
    for(sayac=4;sayac*sayac<=1000;sayac++){
    printf("%f\n",pow(sayac,2));
    }
    getch();
}
