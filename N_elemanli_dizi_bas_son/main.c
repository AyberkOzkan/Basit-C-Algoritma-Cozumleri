/*
N elemanlý bir dizi bulunmaktadýr. Klavyeden girilen sayýlar
diziye, bir tane baþtan bir tane sondan olmak üzere
yerleþtirilmektedir. Örneðin ilk sayý birinci elemana, ikinci
sayý N’inci elemana, üçüncü sayý ikinci elemana, dördüncü sayý
N-1’inci elemana... þeklinde yerleþtirilmektedir. N tane sayýyý
klavyeden okuyup diziye yerleþtiren ve diziyi ekranda
görüntüleyen programýn algoritma ve akýþ diyagramýný çiziniz.
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
Bu soru dizi ve diziyle döngünün kullanýmý
ile alakalý önemli bir sorudur. N elemanlý bir
dizinin ilk elemaný d[0] , son elemaný ise d[N1]’dir. Ý her zamanki gibi sayacýmýzdýr. Sayacýmýz i
= n-1 olana kadar bir tane baþtan, bir tane sondan
deðer girilir. Burada iþlemi tamamlayan, döngü
içerisinde N deðerini azaltmaktýr. Böylece hem dizinin ortasýna gelince sayýlar yerleþmiþ hem de
program bitmiþ olur. N–- yapmak dizinin
sonundan baþa doðru gelmemizi saðlar.
*/
