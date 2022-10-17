/* 10 ile 200 arasýndaki tam sayýlardan 3 katýnýn 2 fazlasý 5 ile tam
bölünebilen sayýlarý gösteren programýn algoritma ve akýþ
diyagramýný çiziniz.
*/

#include <stdio.h>
#include <conio.h>


int main(void){

    int sayi = 10, k, formul;
    for (sayi = 10; sayi <= 200 ;sayi++ ){
            formul = 3 * sayi + 2;
            k = formul % 5;
            if(k == 0){
                printf("Bu sayi: %d 3 katinin 2 fazlasi, 5 ile tam bolunebilir.\n", sayi);
            }
    }
    getch();
}
