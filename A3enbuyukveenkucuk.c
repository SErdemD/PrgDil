#include <stdio.h>
#include <math.h>
void main(){
    int minA = 10; int maxA = 0;
    for(int onlarBas = 1 ; onlarBas < 10 ; onlarBas++){
        int asalmi = 1;
        int sayi = (10 * onlarBas) + 3;
        for (int sayac = 2; sayac <= (sqrt(sayi)+1) ; sayac++)
            if (sayi % sayac == 0){
                asalmi = 0;
                break;
            }     
        if(onlarBas < minA && asalmi == 1)
            minA = onlarBas;
        else if(onlarBas > maxA && asalmi == 1)
            maxA = onlarBas;    
    }
    printf("en buyuk A degeri %d , en kucuk A degeri %d, toplamlari %d" , minA , maxA , minA+maxA);
}