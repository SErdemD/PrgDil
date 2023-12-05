#include <stdio.h>
#include <math.h>
void main(){
    int say1,say2;
    printf("1. ve 2. sayiyi giriniz: ");
    scanf("%d %d",&say1,&say2);
    for(int kucukSay = fmin(say1,say2); kucukSay < fmax(say1,say2); kucukSay++)
        for(int kucukSay2 = fmin(say1,say2); kucukSay2 < kucukSay; kucukSay2++){
            int aralarindaAsal = 1;
            for(int sayac = 2; sayac <= kucukSay; sayac++)
                if (kucukSay % sayac == 0 && kucukSay2 % sayac == 0)
                    aralarindaAsal = 0;
            if(aralarindaAsal == 1)
                printf("%d %d /",kucukSay,kucukSay2);        
        }    
}