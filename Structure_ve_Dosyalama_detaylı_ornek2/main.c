#include <stdio.h>
#include <stdlib.h>

//struct dizisini dinamik tanimladim

typedef struct ogrenci_data{
    int no;
    char ad[51];
    int not;
} Ogrenci;

Ogrenci *ogrenciler; //global degisken, ogrenciler dizisi
int ogrenci_sayisi;


void dosyayaz(){
    printf("OGRENCI BILGILERINI GIRINIZ:\n----------------------------------------------\n");

    for(int i=0; i<ogrenci_sayisi; i++){
        printf("%d. ogrenci no: ",i+1);
        scanf("%d",&ogrenciler[i].no);
        printf("%d. ogrenci adi: ",i+1);
        scanf("%s",&ogrenciler[i].ad);
        printf("%d. ogrenci notu: ",i+1);
        scanf("%d",&ogrenciler[i].not);
        printf("\n");
    }

    FILE *fptr=fopen("ogrenci_bilgi.txt","w");
    if(fptr==NULL)
        printf("dosya acýlamadý!!");

    else{
        for(int i=0; i<ogrenci_sayisi; i++){
            fprintf(fptr,"%d\t%s\t%d\n",ogrenciler[i].no,ogrenciler[i].ad,ogrenciler[i].not);
        }
        fclose(fptr);
        printf("ogrenci bilgileri kaydedildi!!");
    }
}

void dosyaoku(){
    printf("OGRENCI BILGILERI DOSYADAN OKUNUYOR\n\n");
    printf("OGRENCI BILGILERI\N--------------------------------------------\n\n");

    int numara,notu;
    char ismi[51];

    FILE *fptr=fopen("ogrenci_bilgi.txt","r");

    if(fptr==NULL)
        printf("Dosya acýlamdý...");
    else{
        for(int i=0; i<ogrenci_sayisi; i++){
            fscanf(fptr,"%d\t%s\t%d\n",&numara,ismi,&notu);
            printf("No: %d\nAd: %s\nNot: %d\n\n",numara,ismi,notu);
        }
        fclose(fptr);
    }
}

int main()
{
    printf("kac ogrenci var? ");
    scanf("%d",&ogrenci_sayisi); //dinamik bellek tahsisi yapmamiz lazim

    ogrenciler=(Ogrenci*)malloc(ogrenci_sayisi*sizeof(Ogrenci));
    dosyayaz();
    dosyaoku();

    return 0;
}
