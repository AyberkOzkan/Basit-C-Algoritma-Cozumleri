/* Kullanýcýnýn girdiði 3 adet kenar uzunluðuna göre üçgenleri ayýran bir program yazýnýz

*/

int main(void){

    int x, y, z;

    printf("Sirayla Kenar Uzunluklarini Giriniz: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x == y){
        if (y == z){
            printf("Eskenar Ucgendir.");
        }
        else{
            printf("Ýkizkenar Ucgendir.");
        }
    }
    else{
        if(x == z){
                if (z == y){
                        printf("Eskenar Ucgendir.");
                }
                else{
                    printf("Ýkizkenar Ucgendir.");
                }
        }
        else{
            printf("CesitKenar Ucgendir.");
        }
    }




}
