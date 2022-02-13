#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baslangic,orta,son;
    int aranan;
    int dizi[10]={1,2,3,4,5,6,7,8,88,13};

    printf("aranan sayiyi giriniz:");
    scanf("%d", &aranan);

    baslangic=0;
    son=10;
    orta=(baslangic+son)/2;

    for(int i=0; i<10; i++){
        if(dizi[orta]<aranan)
            baslangic=orta+1;

        else if(dizi[orta]==aranan){
            printf("buldunuz");
            break;
    }
        else
            son=orta-1;
            orta=(baslangic+son)/2;
    }

    if(baslangic>son)
        printf("maalesef bulunamadiii..");

    return 0;
}
