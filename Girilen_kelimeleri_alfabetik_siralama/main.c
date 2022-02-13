#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sirasiz[10][51];
    char sirali[10][51];

    printf("10 adet kelime giriniz: \n");

    for(int i=0; i<10; i++)
        gets(sirasiz[i]);

    printf("\nkelimelerin sirali hali: \n");

    int en_kucuk_indis;
    char en_kucuk_kelime[51];
    en_kucuk_kelime[50]='\0';

    for(int i=0; i<10; i++){ //dis döngü
        en_kucuk_indis=-1;

        for(int k=0; k<50; k++) //yardimci döngü
            en_kucuk_kelime[k]='{';

        for(int j=0; j<10; j++){ //iç döngü
            if(strcmp(sirasiz[j],en_kucuk_kelime)<0){
                    strcpy(en_kucuk_kelime,sirasiz[j]);
                    en_kucuk_indis=j;
            }
        }
        for(int k=0; k<50; k++)
            sirasiz[en_kucuk_indis][k]='{';

        strcpy(sirali[i], en_kucuk_kelime);
    }

    for(int i=0; i<10; i++)
        puts(sirali[i]);

    return 0;
}
