// Klavyeden girilen 20 adet say�dan �ift say�lar�n toplam�n�n tek say�lar�n toplam�na oran�n� bulan program�n algoritma ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int sayi, tek = 0, cift = 0, i;
    float oran;
    for (i = 1;i <= 20 ;i++){
        printf("%d Sayi giriniz:",i);
        scanf("%d",&sayi);
        if(sayi%2 == 0)
            cift = cift + sayi;
        else
            tek = tek + sayi;
    }

    oran = cift / tek;
    printf("Cift Sayilarin Tek Sayilara Orani: %f", oran);
    getch();

}
