#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
#include <limits.h>

int main()
{
    int dizi[N], dizi2[N];
    srand(time(0));

    printf("Rastgele duzensiz sayilar\n*************************\n");
    for(int i=0; i<N; i++){
        dizi[i]=rand();
        printf("%d\n", dizi[i]);
    }

    int en_kucuk=INT_MAX;
    int indis,j;

    for(int i=0; i<N; i++){
        en_kucuk=INT_MAX;
        for(j=0; j<N; j++){
            if(en_kucuk>dizi[j]){
                en_kucuk=dizi[j];
                indis=j;
            }
        }
        dizi2[i]=en_kucuk;
        dizi[indis]= INT_MAX;
    }

    printf("\n\n");

    printf("Rastgele sayilarin duzenlenmis hali\n******************************\n");
    for(int x=0; x<20; x++){
        printf("%d\n", dizi2[x]);
    }

    return 0;
}
