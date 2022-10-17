#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);
    if(a % 2 == 0){
    printf("%d sayisi Cifttir.",a);
    }
    else{
        printf("%d sayisi Tektir.",a);
    }

    return 0;
}
