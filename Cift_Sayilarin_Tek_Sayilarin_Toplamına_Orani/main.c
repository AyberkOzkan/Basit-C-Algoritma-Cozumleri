// Klavyeden girilen 20 adet sayýdan çift sayýlarýn toplamýnýn tek sayýlarýn toplamýna oranýný bulan programýn algoritma ve akýþ diyagramýný çiziniz.

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
