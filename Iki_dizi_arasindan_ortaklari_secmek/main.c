#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ortaklaribul(int x[],int y[],int z[],int n){
    int i,j,k,sayac=0;

    for(i=0; i<n; i++){
        for(k=0; k<i; k++){
            if(x[k]==x[i])
                break;
        }

        if(k!=i)
            continue;

        for(j=0; j<n; j++){
            if(x[i]==y[j])
                break;
        }

        if(j!=n)
            //printf("a");
            z[sayac++]=x[i];
    }
}

int main()
{
    srand(time(0));
    int a[50],b[50],c[51];
    int n=50;

    for(int i=0; i<n; i++){
        a[i]=(rand()%10)+1;
        b[i]=(rand()%10)+1;
    }

    printf("Ilk dizi: ");
    for(int  i=0; i<n; i++)
        printf("%d ",a[i]);

    printf("\n\nIkinci dizi: ");
    for(int  i=0; i<n; i++)
        printf("%d ",b[i]);


    for(int  i=0; i<n+1; i++)
        c[i]=-1;


    ortaklaribul(a,b,c,n);

    if(c[0]==-1)
        printf("\n\nortak elemanlar bulunamadi!!");

    else{
        printf("\n\nOrtak elemanlar: ");
        int e=0;
        while(c[e]!=-1){
            printf("%d ",c[e++]);
        }
    }
    return 0;
}
