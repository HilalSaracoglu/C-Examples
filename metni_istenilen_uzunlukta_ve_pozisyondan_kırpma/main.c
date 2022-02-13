#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *substring(char *dizikopya, int pozisyon, int uzunluk){

    for(int i=0; i<uzunluk; i++)
        dizikopya[i]=dizikopya[i+pozisyon];

    dizikopya[uzunluk]='\0';

    dizikopya=(char*)realloc(dizikopya,uzunluk+1); //+1 terminating karakter
    return dizikopya;

}

int main()
{
    char dizi[100];
    int pozisyon,uzunluk;

    printf("metni giriniz: ");
    gets(dizi);


    char *dizi2=(char*)malloc((strlen(dizi)+1)*sizeof(char));
    strcpy(dizi2,dizi);

    printf("koyalama pozisyonunu gir: ");
    scanf("%d",&pozisyon);
    pozisyon--;

    printf("koyalama uzunlugunu gir: ");
    scanf("%d",&uzunluk);

    char *gptr = substring(dizi2,pozisyon,uzunluk); //dönecek metin dizisinin baslangic adresini tutacak pointer

    puts(gptr);
    return 0;
}
