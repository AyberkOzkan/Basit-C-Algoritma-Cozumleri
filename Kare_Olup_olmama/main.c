// Kenarlarý A,B,C,D olan bir dörtgenin kare olup olmadýðýný bulan programýn algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>

main(void){

    int a, b, c, d;
    printf("Dortgenin kenarlarini giriniz: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (a + b == c + d){
        printf("Bu bir karedir.");
    }
    else{
        printf("Kare degildir.");
    }
    getch();
}
