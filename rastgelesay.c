// 0 ile 100 arasi rastgele sayi yazdir

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    srand(time(NULL)); //bunu yapmazsak her seferinda 1. rastgele sayi 2. rastgele sayi... ayni olur
    for(int x = 0; x < 10; x++)
        printf("%d\t", ((rand() % 100) + 1));
}