#include <stdio.h>
#include <stdlib.h>

void yazdir1(char *X[],int a,int b){ //dinamik matris
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            printf("%c\t",X[i][j]);
        printf("\n");}
}

void yazdir2(char X[][2],int a,int b){ //statik matris
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            printf("%c\t",X[i][j]);
        printf("\n");}
}

int main()
{
    char *harfler1[13];
    //matrisi dinamik dizi ile tanimlarsak
    char harfler2[13][2];
    //matrisi statik dizi ile tanimlarsak

    for(int i=0;i<13;i++)
        harfler1[i]=(char *)malloc(sizeof(char)*2);

    for(int i=0;i<13;i++)
        for(int j=0;j<2;j++){
            harfler1[i][j]=65+i*2+j;
            harfler2[i][j]=65+i*2+j;
            //statik ya da dinamik farketmez, matristeki
            //elemanlara M[i][j] indislemesi ile erisebilirsiniz
        }

    printf("Dinamik matrisle cagirmak\n**************************\n");
    yazdir1(harfler1,13,2);

    printf("Statik matrisle cagirmak\n**************************\n");
    yazdir2(harfler2,13,2);

    return 0;
}
