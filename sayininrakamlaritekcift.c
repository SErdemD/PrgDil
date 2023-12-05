//kullanicidan alinan sayinin kac rakami tek kac rakami cift
#include <stdio.h>
void main(){
    int say; int ciftSay = 0; int tekSay = 0;
    printf("sayi giriniz: ");
    scanf("%d",&say);
    for(int sayac = 1 ; say/sayac > 0.1 ; sayac*=10)
        if((say/sayac) % 2 == 0)
            ciftSay++;
        else
            tekSay++;
     printf("sectiginiz sayida %d tane tek rakam, %d tane cift rakam vardir",tekSay,ciftSay);           
}