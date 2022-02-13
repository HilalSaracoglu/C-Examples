#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void kelimebul(char metin1[], char metin2[]){
    int indis[51];
    int i,j,sayac=0;

    for(i=0; i<strlen(metin1) - strlen(metin2)+1; i++){
        for(j=0; j<strlen(metin2); j++){
            if(metin1[i+j]!= metin2[j])
                break;
        }

        if(j== strlen(metin2))
            indis[sayac++]=i; //o an ki ilk indisi veriliyor
    }

    indis[sayac]=-1;

    printf("Bulunan indisler: ");
    sayac=0;
    while(indis[sayac] != -1){
        printf("\n%d",indis[sayac]);
        sayac++;
    }
}

int main()
{
    char metin[51];
    char metin2[51];

    printf("metni giriniz: ");
    gets(metin);
    printf("aranan metni giriniz: ");
    gets(metin2);

    kelimebul(metin,metin2);

    return 0;
}
