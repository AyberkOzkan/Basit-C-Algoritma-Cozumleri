/*
10 elemanl� bir say� dizisini giri�ini yapan algoritma ve ak��
diyagram�n� �iziniz.

*/

#include <stdio.h>
#include <conio.h>

int main(void){

    int d[10], i;

    printf("Dizinin Elemanlarini Giriniz: ");
    for (i = 0; i < 10 ;i++){
            printf("\nDizinin %d. elemani\n",i);
            printf("d[%d]=",i);
            scanf("%d",&d[i]);
            }
    getch();
}
