// Girilen a ve b say�s� 50'den b�y�k oldu�unda c=a+b i�lemini yapan de�ilse bu say�lar uygun de�il yazd�ran program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int a, b, c;
    printf("ilk(a) sayiyi giriniz: ");
    scanf("%d",&a);
    printf("ikinci(b) sayiyi giriniz: ");
    scanf("%d",&b);

    if (a > 50 && b > 50){
        c = a + b;
        printf("%d",c);
    }
    else
        printf("Bu sayilar uygun degil.");
    getch();
}
