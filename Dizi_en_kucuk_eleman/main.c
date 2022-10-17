/*
10 elemanlý bir sayý dizisinde en küçük elemanýn bu dizinin kaçýncý
elemaný olduðunu bulan programýn algoritma ve akýþ diyagramýný
çiziniz.
*/

#include <stdio.h>
#include <conio.h>

int main(void){

    int dizi[10], enk_eleman, x, i;
    printf("10 elemanli dizinin elemanlarini giriniz: ");
    scanf("%d",&dizi[0]);
    enk_eleman = dizi[0];
    for(i = 1; i < 10; i++){
        scanf("%d",&dizi[i]);
        if(enk_eleman > dizi[i]){
            enk_eleman = dizi[i];
            x = i + 1;
        }
    }
    printf("En Kucuk Eleman %d. Siradadir.", x);
    getch();
}

/* Bu soru bize dizinin eleman sayýsý ile
dizi indisi arasýndaki farký gösteren bir
örnektir. En küçük eleman örnek olarak d[4]
‘te bulunduysa bu dizinin 4+1 =5 . elemanýdýr.
Bunu unutmamalýyýz. Enk deðiþkeni her sayý
ile karþýlaþtýrýldýðýnda takas alaný gibi en son
deðerini alana kadar deðiþir. Bunu 5 sayý ile
test edelim ama program kodlarýmýz tam
algoritmanýn aynýsýdýr.
*/
