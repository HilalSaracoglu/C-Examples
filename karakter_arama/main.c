#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[101];
    char aranan;
    int poz[100],sayac=0;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    printf("Aranacak karakteri giriniz: ");
    scanf("%c",&aranan);

    for(int i=0;i<strlen(cumle);i++){
        if(aranan==cumle[i])
            poz[sayac++]=i;
    }

    printf("\nGirilen cumlede %c karakteri %d kere bulundu\n",aranan,sayac);
    for(int i=0;i<sayac;i++)
        printf("Cumledeki indis konumu: %d\n",poz[i]);

    return 0;
}



/*
//Alternatif kod
int main()
{
    char aranan;
    char cumle[101];
    int flag=0;

    gets(cumle);
    scanf("%c", &aranan);

    for(int i=0; i<strlen(cumle); i++){
        if(aranan==cumle[i]){
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("bulundu");
    else
        printf("bulunamadi");

    return 0;
}*/
