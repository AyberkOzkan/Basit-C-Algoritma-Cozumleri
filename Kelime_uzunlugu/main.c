/* .Girilen bir kelimenin uzunluðunu bulan programýn algoritma ve akýþ
diyagramýný çiziniz. */

#include <conio.h>
#include <stdio.h>

int main(void){

    char klm[100];
    int i;
    printf("Uzunlugunu bulmak istediginiz kelimeyi giriniz: ");
    gets(klm);
    for (i = 0; i < 100; i++){
            if(klm[i]== '\0'){
                printf("Kelimenin uzunlugu: %d'dir", i);
                break;
            }
    }
    getch();
}


/*
Bu soruda bir karakter dizisi
tanýmlýyoruz. Kelimeyi de okutmak için gets()
fonksiyonunu kullabiliriz (c ‘de) veya
kullanýcýnýn boþ bir deðer girmesi yerine
karakterler okutulup diziye atýlabilir. 100
eleman tanýmlamamýzýn sebebi dizi
tanýmlanýrken, dinamik dizi
tanýmlamadýðýmýzda her zaman kaç elemanlý
olduðunu derleyiciye belirtmektir. Biz burada
onun için 100 elemanlý demeyi tercih ettik.
Sonuçta NULL girince döngü sonlanacaktýr.
Gets() ile sisteme kelime okutursak, son
karakteri girdikten sonra dizinin sonu, kendine
has bir iþaret koyar(‘\o’ gibi). Bu da bize
dizinin sonuna geldiðimizi gösterir. */
