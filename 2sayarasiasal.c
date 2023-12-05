#include <stdio.h>
#include <math.h>
void main(){
    int say1,say2;
    printf("sayinin hangi aralikta olacagini giriniz: ");
    scanf("%d %d",&say1,&say2);
    for (int kucukSay = fmin(say1,say2) ; kucukSay <= fmax(say1,say2) ; kucukSay++){
        int asalmi = 1;
        if (kucukSay < 2)
            asalmi = 0;                                                        
        for(int sayac = 2 ; sayac <= sqrt(kucukSay) ; sayac++)
            if (kucukSay % sayac == 0){
                asalmi = 0;
                break;    
            }
        if (asalmi == 1)
            printf("%d ",kucukSay);
    }
}