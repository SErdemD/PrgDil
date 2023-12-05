#include <stdio.h>
void main(){
    float say1,say2,sonuc;
    char islem;
    printf("1. ve 2. sayiyi giriniz: ");
    scanf("%f %f",&say1 , &say2);
    printf("Yapacaginiz islemi giriniz (toplama = +,cikarma = -,carpma = *,bolme = /) ");
    scanf(" %c", &islem);
    if(islem == '+')
        printf("%f", say1 + say2);
    else if(islem == '-')
        printf("%f", say1 - say2);
    else if(islem == '*')
        printf("%f", say1 * say2);
    else if(islem == '/')
        printf("%f", say1 / say2);
    else 
        printf("hata!");
}