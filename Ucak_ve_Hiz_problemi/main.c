// Bir uçak 15 dk boyunca düzgün hýzlanarak hýzý 480 km/s oluyor. Sonra 20 dk sabit hýzla gidiyor ve 15 dk boyunca düzgün yavaþlayarak hýzý
// sýfýr oluyor. Herhangi bir t anýnda hýzý veren algoritmayý ve akýþ diyagramýný çiziniz.

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
            v = 480;                // 20 dakikalýk sabit aralýk.
            printf("%d",v);
        }
    }
    getch();
}
