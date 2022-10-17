// Girilen a ve b sayýsý 50'den büyük olduðunda c=a+b iþlemini yapan deðilse bu sayýlar uygun deðil yazdýran programýn algoritma ve akýþ diyagramýný çiziniz.

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
