#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char metin1[100], metin2[100];

    printf("ilk metni gir: ");
    gets(metin1);

    printf("ikinci metni gir: ");
    gets(metin2);

    int a=strlen(metin1);
    int b=strlen(metin2);

    char *birlesik=(char*)malloc((a+b+1)*sizeof(char));
    strcpy(birlesik,metin1);
    strcpy(birlesik+a,metin2);

    printf("\nIlk metin: ");
    puts(metin1);
    printf("Ikinci metin: ");
    puts(metin2);
    printf("Birlesik metin: ");
    puts(birlesik);


    return 0;
}
