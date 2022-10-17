// Boyu ile kilosu girilen kiþinin þiþman mý, zayýf mý yoksa ideal kiloda mý olduðunu gösteren programýn algoritma ve akýþ diyagramýný çiziniz.

#include <conio.h>
#include <stdio.h>

main (void){

    int kilo, boy;
    printf("Boyunuzu Giriniz(cm): ");
    scanf("%d", &boy);
    printf("Kilonuzu Giriniz(kg): ");
    scanf("%d", &kilo);
    boy = boy % 100;
    if(boy - kilo >= 11){
        printf("Kilo almalisin.");
    }
    else
        if(boy - kilo == 11){
        printf("kilonuz ideal.");
    }
    else {
        printf("Kilo vermelisin. Diyetisyen numarasi: +9053....");
    }
    getch();
}
