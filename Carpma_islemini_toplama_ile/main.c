// �arpma i�lemini toplama kullanarak bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int sayi1, sayi2, sonuc = 0;

    printf("1.Sayiyi Giriniz: ");
    scanf("%d", &sayi1);

    printf("2.Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
    while(sayi2 > 0){
        sonuc = sayi1 + sonuc;
        sayi2 --;
    }

    printf("%d", sonuc);
    getch();

}
