// Fibonacci serisinin ilk 10 terimini ekrana basan algoritma ve akýþ diyagramýný çiziniz

#include <stdio.h>
#include <conio.h>

int main(){

    int sayi1 = 1, sayi2 = 1, sayilar, dongu;
    printf("%d\n",sayi1);
    printf("%d\n",sayi2);
    for(dongu = 2; dongu <= 11; dongu++){
        sayilar = sayi1 + sayi2;
        printf("%d\n", sayilar);
        sayi1 = sayi2;
        sayi2 = sayilar;
    }
    getch();
}
