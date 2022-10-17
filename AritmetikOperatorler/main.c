#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    int sonuc;
    sayi1 = 3;
    sayi2 = 5;
    sonuc = sayi1+sayi2;
    printf("toplam:%d\n",sonuc);
    printf("Cikarma:%d", sayi1 - sayi2);
    printf("\nSayi1'i -5 ile toplama:%d", sayi1 -5);
    printf("\nSayi1 ile 3 ile Carpma:%d", sayi1*3);
    printf("\nSayi1 ile 3'e bolme:%d", sayi1 /3 );

    return 0;
}
