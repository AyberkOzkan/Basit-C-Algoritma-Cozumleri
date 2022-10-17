/*
10 elemanl� bir say� dizisinde en k���k eleman�n bu dizinin ka��nc�
eleman� oldu�unu bulan program�n algoritma ve ak�� diyagram�n�
�iziniz.
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

/* Bu soru bize dizinin eleman say�s� ile
dizi indisi aras�ndaki fark� g�steren bir
�rnektir. En k���k eleman �rnek olarak d[4]
�te bulunduysa bu dizinin 4+1 =5 . eleman�d�r.
Bunu unutmamal�y�z. Enk de�i�keni her say�
ile kar��la�t�r�ld���nda takas alan� gibi en son
de�erini alana kadar de�i�ir. Bunu 5 say� ile
test edelim ama program kodlar�m�z tam
algoritman�n ayn�s�d�r.
*/
