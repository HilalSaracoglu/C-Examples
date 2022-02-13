#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct kredi{
    float oran;
    int vadesayisi;
};

typedef struct kredi arackredi;

struct Arac{
    char markamodel[50];
    int modelyili;
    int km;
    double fiyat;
    arackredi kredibilgi;
};

typedef struct Arac Araba;

int main()
{
    srand(time(0));
    int aracsayisi;
    printf("galeride kac arac var? ");
    scanf("%d",&aracsayisi);
    getchar();

    Araba *arabaptr; //dizimiz
    arabaptr=(Araba*)malloc(aracsayisi*sizeof(Araba));

    for(int i=0; i<aracsayisi; i++){
        printf("%d. aracin marka modeli: ",i+1);
        gets(arabaptr[i].markamodel);
        printf("%d. aracin model yili: ",i+1);
        scanf("%d", &arabaptr[i].modelyili);
        printf("%d. aracin kilometresi: ",i+1);
        scanf("%d", &arabaptr[i].km);
        printf("%d. fiyati: ",i+1);
        scanf("%lf", &arabaptr[i].fiyat);
        getchar();
    }

    for(int i=0; i<aracsayisi; i++){
        arabaptr[i].kredibilgi.oran=(rand()%9+7)/100.0;
        arabaptr[i].kredibilgi.vadesayisi=rand()%49+12;
    }


    for(int j=0; j<aracsayisi; j++){
        printf("%s %d %d %.2lf Kredi orani:%.2f Kredi vaadesi: %d\n",arabaptr[j].markamodel,arabaptr[j].modelyili,arabaptr[j].km,arabaptr[j].fiyat,arabaptr[j].kredibilgi.oran,arabaptr[j].kredibilgi.vadesayisi);
    }

    return 0;
}
