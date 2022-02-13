#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
#include <limits.h>

int main()
{
    int dizi[N];
    srand(time(0));

    for(int i=0; i<N; i++){
            dizi[i] = rand();
            printf("%d \n ", dizi[i]);
    }

    printf("\n\n");
    int en_kucuk = INT_MAX;
    int en_buyuk = INT_MIN;
    int indis;

    for(int i=0; i<N; i++){
        if(en_kucuk>dizi[i]){
            en_kucuk=dizi[i];
            indis=i;
        }
    }

    printf("En Kucuk Sayi: %d---> Indisi: %d",en_kucuk, indis);
    printf("\n");

    for(int j=0; j<N; j++){
        if(en_buyuk<dizi[j]){
            en_buyuk=dizi[j];
            indis=j;
        }
    }

    printf("En Buyuk Sayi: %d---> Indisi: %d\n",en_buyuk, indis);

    return 0;
}
