/* 10 ile 200 aras�ndaki tam say�lardan 3 kat�n�n 2 fazlas� 5 ile tam
b�l�nebilen say�lar� g�steren program�n algoritma ve ak��
diyagram�n� �iziniz.
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
