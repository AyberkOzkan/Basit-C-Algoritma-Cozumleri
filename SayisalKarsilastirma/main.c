#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    printf("1. Sayiyi Girin:",sayi1);
    scanf("%d",&sayi1);
    printf("\n2. Sayiyi Girin:",'%d');
    scanf("%d",&sayi2);

    if(sayi1 > sayi2){
        printf("1. Sayi buyuktur.");
    }
    else if(sayi1 == sayi2){
            printf("2 sayida esittir.");
    }
    else {
        printf("1. Sayi buyuk degildir.");
    }


    return 0;
}
