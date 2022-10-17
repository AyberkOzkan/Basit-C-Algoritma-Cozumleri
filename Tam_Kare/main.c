// 10 ile 1000 arasýndaki tam kare sayýlarý ekrana yazdýran programýn algoritma ve akýþ diyagramýný çiziniz.

// Bu soru kolay bir örnek olarak
//karþýmýza çýkýyor. 10 ile 100 arasýndaki tam
//kare sayýlar 16 ile baþlayacaðýndan sayaç da
//4’ten baþlar. 4’ten küçük olanlara gerek
//yoktur. Çünkü 3*3 örnek olarak 9’dur. 10 ile
//100 arasýnda deðildir.

#include <stdio.h>
#include <conio.h>

int main(){
    int sayac;
    for(sayac=4;sayac*sayac<=1000;sayac++){
    printf("%f\n",pow(sayac,2));
    }
    getch();
}
