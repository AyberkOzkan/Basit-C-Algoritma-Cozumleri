// Verilen yýlýn artýk yýl olup olmadýðýný bulan programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>

main(void){

    int yil;
    printf("Yili giriniz: ");
    scanf("%d",&yil);

    if (yil % 4 == 0){
        printf("Girilen Yil Artik Yildir.");
    }
    else{
        printf("Artik yil degildir.");
    }
    getch();
}
