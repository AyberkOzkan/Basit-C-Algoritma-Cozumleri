/* Kullan�c�n�n girdi�i 3 adet kenar uzunlu�una g�re ��genleri ay�ran bir program yaz�n�z

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
            printf("�kizkenar Ucgendir.");
        }
    }
    else{
        if(x == z){
                if (z == y){
                        printf("Eskenar Ucgendir.");
                }
                else{
                    printf("�kizkenar Ucgendir.");
                }
        }
        else{
            printf("CesitKenar Ucgendir.");
        }
    }




}
