/*
N elemanl� bir dizi bulunmaktad�r. Klavyeden girilen say�lar
diziye, bir tane ba�tan bir tane sondan olmak �zere
yerle�tirilmektedir. �rne�in ilk say� birinci elemana, ikinci
say� N�inci elemana, ���nc� say� ikinci elemana, d�rd�nc� say�
N-1�inci elemana... �eklinde yerle�tirilmektedir. N tane say�y�
klavyeden okuyup diziye yerle�tiren ve diziyi ekranda
g�r�nt�leyen program�n algoritma ve ak�� diyagram�n� �iziniz.
*/
#include <stdio.h>
#include <conio.h>

int main(void){
    int n = 5, dizi[5], i;
    for (i = 0; i < n; i++){
        printf("Dizinin elemanlarini giriniz(Bas - Son): ");
        scanf("%d",&dizi[i]);
        if((n - 1)!= i){
                scanf("%d",&dizi[n-1]);
                n = n - 1;
        }
    }
    n = 5;
    for(i = 0; i < n; i++){
        printf("%d",dizi[i]);
    }
    getch();
}














/*
Bu soru dizi ve diziyle d�ng�n�n kullan�m�
ile alakal� �nemli bir sorudur. N elemanl� bir
dizinin ilk eleman� d[0] , son eleman� ise d[N1]�dir. � her zamanki gibi sayac�m�zd�r. Sayac�m�z i
= n-1 olana kadar bir tane ba�tan, bir tane sondan
de�er girilir. Burada i�lemi tamamlayan, d�ng�
i�erisinde N de�erini azaltmakt�r. B�ylece hem dizinin ortas�na gelince say�lar yerle�mi� hem de
program bitmi� olur. N�- yapmak dizinin
sonundan ba�a do�ru gelmemizi sa�lar.
*/
