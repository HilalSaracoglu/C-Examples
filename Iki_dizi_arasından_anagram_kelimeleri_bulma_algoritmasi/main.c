#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[13][10] = { "harbi", "bitik", "ferah", "define", "alman", "yaban", "sanal", "okutman",
 "enerjik", "balistik", "toparlak", "algoritma", "karbonlu" };

    char y[14][10] = { "efendi", "portakal", "jenerik", "komutan", "bitki", "aslan", "ihbar", "baronluk",
"bayan", "logaritma", "refah", "basitlik", "anlam", "sabitlik" };

    char temp[10];

    for(int i=0; i<13; i++){
        for(int j=0; j<14; j++){
            if(strlen(x[i])== strlen(y[j])){
                strcpy(temp, y[j]);
                int sayac=0;

                for(int k=0; k<strlen(x[i]); k++){
                    for(int t=0; t<strlen(temp); t++){
                        if(x[i][k]==temp[t]){
                            temp[t]='-';
                            sayac++;
                            break;
                        }
                    }
                }

                if(sayac==strlen(y[j])){
                    printf("%s ile %s anagram.", x[i],y[j]);
                    printf("\n");}
            }
        }
    }
    return 0;
}
