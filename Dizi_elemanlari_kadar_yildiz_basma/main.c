#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[5]= {1,2,3,8,5};

    for(int i=0; i<5; i++){
        for(int j=0; j<dizi[i]; j++)
            printf("*");
        printf("\n");
    }


    return 0;
}
