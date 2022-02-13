#include <stdio.h>
#include <stdlib.h>
void main()
{
    char metin[901];
    char sifreli_metin[901];
    int uzunluk, i, j, n, sayac = 0;
    char **matris;

    printf("Sifrelenecek metni giriniz (max 900 karakter): ");
    gets(metin);

    uzunluk = strlen(metin);
    n = ceil(sqrt(uzunluk)); //n, matrisin sat�r/s�tun say�s�n� g�steriyor.

    //nxn lik matrisi dinamik yoldan olusturmak
    matris = (char **) malloc( sizeof( char * ) * n );
    for(i = 0; i < n; i++)
        matris[i] = (char *) malloc( sizeof( char ) * n );

    //matris sutunlarini metin isimli dizinin elamanlari ile doldurduk
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(sayac < uzunluk)
                matris[j][i] = metin[sayac++];
            else
                matris[j][i] = 'X';
        }
    }

    printf("\nOlusturulan matris (%dx%d):\n\n", n, n);

    //sifreli metin dizisinin dongusu
    sayac = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%c\t", matris[i][j]);
            sifreli_metin[sayac++] = matris[i][j];
        }
        printf("\n");
    }

    sifreli_metin[sayac] = '\0';
    printf("\nSifreli metin: %s", sifreli_metin);
}
