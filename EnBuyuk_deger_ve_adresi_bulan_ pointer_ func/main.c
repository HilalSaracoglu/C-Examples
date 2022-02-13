#include <stdio.h>
#include <stdlib.h>

double *maxadr(double a[], int n){
    int ebd=a[0];
    int *eba=&a[0];

    for(int i=0; i<n; i++){
        if(a[i]>ebd){
            ebd=a[i];
            eba=&a[i];
        }
    }
    return eba;
}

int main()
{
    double *p;
    //double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
    double *x;
    int n;
    printf("kac sayi gireceksiniz: ");
    scanf("%d",&n);

    x = (double*)malloc(sizeof(double)*n);
    printf("sayilari giriniz: ");
    for(int i=0; i<n; i++){
        scanf("%d",&x[i]);
    }

    for(int i=0; i<n; i++){
        printf("indis: %d, deger: %lf, adres: %p\n", i, *(x+i), &x[i]);
    }
    printf("\n\n\n");
    p=maxadr(x,n);

    printf("en buyuk adress: %p\n", p);
    printf("en buyuk deger: %lf", *p);

    return 0;
}
