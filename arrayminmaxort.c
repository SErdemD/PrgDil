//5 sinav notu girisi alinir,bunlarin en dusugu ,en yuksegi ve ortalamasi ekrana yazdirilir
#include <stdio.h>
void main(){
    int topNot,minNot = 100; int maxNot = 0;
    int notlar[5];
    for(int sayac = 0; sayac < 5;sayac++){
        printf("%d. notu giriniz: ",sayac + 1);
        scanf("%d", &notlar[sayac]);
        topNot += notlar[sayac];
        if(maxNot < notlar[sayac])
            maxNot = notlar[sayac];
        if(minNot > notlar[sayac])
            minNot = notlar[sayac];    
    }    
    printf("en dusuk not :%d\nen yuksek not: %d\nnotlarin ortalamasi: %d",minNot,maxNot,topNot / 5);
}