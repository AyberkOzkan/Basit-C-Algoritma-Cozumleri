// Ýki sayýnýn toplamýný veren programýn algoritma ve akýþ diyagramýný çiziniz.



#include <stdio.h>
#include <conio.h>

int main(){
    int a, b, c;                    // 3 tane deðiþken tanýmladým.
    printf("1. Sayiyi Giriniz: ");  // Kullanýcýdan 1. Sayýyý girmesini istedim.
    scanf("%d",&b);                 // 1. sayýyý b deðiþkenine atadým.
    printf("2. Sayiyi Giriniz: ");  // Kullanýcýdan 2. Sayýyý girmesini istedim.
    scanf("%d",&a);                 // 2. sayýyý a deðiþkenine atadým.
    c = b + a;                      // 2 Sayýnýn toplam formulu
    printf("Toplam: %d", c);        // Toplamý yazdýrdým.
    getch();

}
