#include <stdio.h>
void main(){
    int sayiSayisi; int tekSayTop = 0; int ciftSayTop = 0;
    printf("kac sayi girilecegini yaziniz: ");
    scanf("%d",&sayiSayisi);
    int sayilar[sayiSayisi];
    for(int sayac = 0; sayac < sayiSayisi ; sayac++){
        printf("%d. sayiyi giriniz: ", sayac + 1);
        scanf("%d", &sayilar[sayac]);
        if (sayilar[sayac] % 2 == 0)
            ciftSayTop += sayilar[sayac];
        else
            tekSayTop += sayilar[sayac];
    }
    printf("yazdiginiz sayilar: ");
    for(int sayac = 0; sayac < sayiSayisi ; sayac++)
        printf("%d ",sayilar[sayac]);
    printf("\n");    
    printf("tek sayilar toplami:%d\ncift sayilar toplami: %d", tekSayTop, ciftSayTop);    
}       