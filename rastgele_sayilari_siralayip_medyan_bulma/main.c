#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     srand(time(0));
     int sayilar[101];

     printf("Dizimizdeki rastgele sayilar\n****************************\n");
     for(int i=0;i<101;i++){
        sayilar[i]=rand()%1000+1;
        printf("%d ",sayilar[i]);
     }
     //sayilari kucukten buyuge siralasak 50. indiste
     //kac olur?

     int enkucuk,enkucukindis;
     for(int i=0;i<=50;i++){
         enkucuk=1001; //INT_MAX da olur
         enkucukindis=-1;
         for(int j=0;j<101;j++)
         if(enkucuk>sayilar[j]){
             enkucuk=sayilar[j];
             enkucukindis=j;
         }
         sayilar[enkucukindis]=1001;
      }

     printf("\n\nDizinin medyani: %d\n",enkucuk);
     return 0;
}
