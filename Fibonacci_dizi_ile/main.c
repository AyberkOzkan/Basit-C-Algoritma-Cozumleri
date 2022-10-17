/* Fibonacci serisinin ilk 10 terimini dizi kullanarak bulan
programýn algoritma ve akýþ diyagramý çiziniz.
*/

#include <stdio.h>
#include <conio.h>

int main(void){

    int dizi[10], i;
    dizi[0] = 1;
    dizi[1] = 1;
    printf("%d %d", dizi[0], dizi[1]);
    for (i = 2; i < 10 ;i++){
        dizi[i] = dizi[i-1] + dizi[i-2];        // Bir önceki dizilerdeki sayilarýn toplamý
        printf(" %d", dizi[i]);
    }
    getch();
}
