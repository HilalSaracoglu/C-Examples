#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){

    char sayi_m[18]; // 10 karakterlik tamsayý + 1 nokta + 6 karakterlik ondalýk kýsým + 1 terminating
    double sayi = 0.0;
    int i;
    printf("Ondalik sayiyi giriniz: ");
    gets(sayi_m);

    for(i=0;i<strlen(sayi_m);i++){
         if(sayi_m[i]=='.')
         break;
    }
    for(int j=i-1;j>=0;j--)
        sayi+=(sayi_m[j]-48)*pow(10,i-1-j);
    for(int j=i+1;sayi_m[j]!='\0';j++)
        sayi+=(sayi_m[j]-48)*pow(10,i-j);

    printf("Metnin sayiya cevrilmis hali: %10.6lf\n", sayi);
    return 0;
}
