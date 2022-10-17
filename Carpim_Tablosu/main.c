// Çarpým Tablosunun algoritma ve akýþ diyagramýný çiziniz.

#include <stdio.h>
#include <conio.h>

int main(){

    int x = 1, y = 1;
    for(x = 1; x <= 10; x++){
        printf("------ Carpim Tablosu %d ------\n", x);

        for(y = 1; y <= 10; y++){
            printf("%d * %d = %d\n", x, y, x*y);
            }
    }
    getch();
}
