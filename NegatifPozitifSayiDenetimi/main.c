#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Bir sayi giriniz:",a);
    scanf("%d",&a);
    if(a > 0){
        printf("Sayi pozitiftir.",a);
    }
    else if(a == 0){
        printf("Sayi 0'dir",a);
    }
    else
        printf("Sayi negatiftir.",a);
    return 0;

}
