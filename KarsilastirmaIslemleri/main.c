#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("a sayisini girin: ");
    scanf("%d", &a);
    printf("\nb sayisini girin: ");
    scanf("%d",&b);
    printf("\nc sayisini girin: ");
    scanf("%d",&c);
    if(a > b && a > c){
    printf("%d sayisi buyuktur.",a);
    }
    else if(b > a && b > c){
    printf("%d sayisi buyuktur.",b);
    }
    else if(c > b && c > a){
    printf("%d sayisi buyuktur.",c);
    }
    else if(c == b && c > a){
    printf("c ve b esit. %d sayisi buyuktur.",c);
    }
    else if(c == a && c > b){
    printf("a ve c esit. %d sayisi buyuktur.",c);
    }
    else if(a == b && a > c){
    printf("a ve b esit. %d sayisi buyuktur.",a);
    }
    else if(a == c && a > b){
    printf("a ve c esit. %d sayisi buyuktur.",a);
    }
    else if(b == a && b > c){
    printf("b ve a esit. %d sayisi buyuktur.",b);
    }
    else if(b == c && b > a){
    printf("b ve c esit. %d sayisi buyuktur.",b);
    }
    else{
        printf("Hepsi esit.");
    }

    return 0;
}
