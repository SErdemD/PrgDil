//0 dan 100 e kadar tek sayilari yazdir

#include <stdio.h>
void main(){
    int sayac = 0;
    for(;;){
        if (sayac == 100)
            break;
        if (sayac % 2 != 0)
            printf("%d\n", sayac);
        sayac++;
    }
}