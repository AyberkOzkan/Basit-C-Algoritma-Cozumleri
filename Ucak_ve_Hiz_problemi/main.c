// Bir u�ak 15 dk boyunca d�zg�n h�zlanarak h�z� 480 km/s oluyor. Sonra 20 dk sabit h�zla gidiyor ve 15 dk boyunca d�zg�n yava�layarak h�z�
// s�f�r oluyor. Herhangi bir t an�nda h�z� veren algoritmay� ve ak�� diyagram�n� �iziniz.

#include <stdio.h>
#include <conio.h>

int main(void){

    int t, v;
    printf("Ucagin hizini gormek istediginiz anin(dakika) t degerini giriniz: ");
    scanf("%d",&t);
    if(t < 15){
        v = 32 * t;                         // 480 / 15 = 32
        printf("%d",v);
    }
    else {
        if(t > 35){                     // 20 + 15 = 35
                v = 1600 - (32 * t);   // 480 + 480 + 640 = 1600 toplam yolu buldum.
                printf("%d",v);
        }
        else {
            v = 480;                // 20 dakikal�k sabit aral�k.
            printf("%d",v);
        }
    }
    getch();
}
