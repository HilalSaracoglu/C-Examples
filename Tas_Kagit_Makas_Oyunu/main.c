#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int oyun(int oyuncu_degerleri[], int bilgisayar_degerleri[]){

    srand(time(0));
    int bilgisayar;
    int kullanici;
    int k_puan=0, b_puan=0;

    int i=0;
    while(k_puan!=5 && b_puan!=5){ //Kullanici veya bilgisayardan biri 5 olmadigi surece dongu devam ediyor.
        printf("Seciminizi Girin:");
        scanf("%d",&kullanici);

        bilgisayar = rand() %3;

        //Kullanici ve Bilgisayarin secimine gore olusabilecek ihtimaller
        //Bilgisayar ve kullanicin kazanmasina bagli olarakta k_puan ve b_puan degiskenlerime +1 puan ekleniyor.
        if(kullanici==0){
            if(bilgisayar==0)
                printf("beraber\n");
            else if(bilgisayar==1){
                printf("Kagit Tas'i yener.Bilgisayar kazandi\n");
                b_puan += 1;}
            else{
                printf("Tas Makas'i yener.Oyuncu kazandi\n");
                k_puan += 1;}
        }

        else if(kullanici==1){
            if(bilgisayar==1)
                printf("beraber\n");
            else if(bilgisayar==0){
                printf("Kagit Tas'i yener.Oyuncu kazandi\n");
                k_puan += 1;}
            else{
                printf("Makas Kagit'i yener.Bilgisayar kazandi\n");
                b_puan += 1;}}

        else if(kullanici==2){
            if(bilgisayar==2)
                printf("beraber\n");
            else if(bilgisayar==1){
                printf("Kagit Tas'i yener.Bilgisayar kazandi\n");
                b_puan += 1;}
            else{
                printf("Tas Makas'i yener.Oyuncu kazandi\n");
                k_puan += 1;}}

        oyuncu_degerleri[i]=kullanici;
        bilgisayar_degerleri[i]=bilgisayar;
        i++;
    }

    if(b_puan==5){
        printf("\n\nBILGISAYAR KAZANDII");
        printf("  Skor:%d-%d",b_puan,k_puan);}

    if(k_puan==5){
        printf("\n\nOYUNCU KAZANDII");
        printf("  Skor:%d-%d",k_puan, b_puan);}

    printf("\n");


    printf("\nOyuncu_degerleri: ");
    for(int k=0; k<i; k++)
        printf("%d ", oyuncu_degerleri[k]);

    printf("\n");

    printf("Bilgisayar_degerleri: ");
    for(int k=0; k<i; k++)
        printf("%d ", bilgisayar_degerleri[k]);

    return 0;
}

int main()
{
    int sonuc;
    int dizi1[25], dizi2[25];
    printf("KURALLAR:\n");
    printf("Tas, makasi yener\nKagit, tasi yener\nMakas, kagidi yener\n\n");
    printf("Tas=0 , Kagit= 1, Makas= 2\n\n");

    sonuc = oyun(dizi1,dizi2);
    printf("%d",sonuc);

    return 0;
}
