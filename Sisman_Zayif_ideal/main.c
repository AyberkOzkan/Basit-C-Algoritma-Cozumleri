// Boyu ile kilosu girilen ki�inin �i�man m�, zay�f m� yoksa ideal kiloda m� oldu�unu g�steren program�n algoritma ve ak�� diyagram�n� �iziniz.

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
