#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    for(i=0; i<strlen(cumle); i++){
        if(cumle[i]==' ')
            cumle[i+1]=toupper(cumle[i+1]);

        else
            if(i==0)
            cumle[i]=toupper(cumle[i]);
    }

    printf("Cumlenin duzeltilmis hali: %s", cumle);
    return 0;
}
