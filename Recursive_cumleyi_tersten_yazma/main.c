#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tersyaz(char x[], int y){
    if(y>0){
        printf("%c", x[y-1]);
        tersyaz(x, y-1);
    }
}

int main()
{
    char metin[101];
    printf("Bir metin giriniz: ");
    gets(metin);
    printf("Metinin tersten yazilisi: ");
    tersyaz(metin, strlen(metin));

    return 0;
}
