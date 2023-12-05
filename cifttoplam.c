//0 dan 100 e kadar olan cift sayilarin toplami

#include <stdio.h>
void main(){
    int sayac = 0; int top = 0;
    for(;;){
        if (sayac == 100)
            break;
        if (sayac % 2 == 0)
            top += sayac;
        sayac++;    
    }
    printf("0 dan 100 e kadar olan cift sayilarin toplami: %d",top);
}

