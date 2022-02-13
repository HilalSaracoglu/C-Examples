#include <stdio.h>
#include <stdlib.h>

int taumu( int sayi, int a, int b ) {
     if( a == 1 ){ //temel durumda 1, sayi�y� tam b�ler. O y�zden a�a��da b+1 diyoruz.
         if( sayi % (b + 1) == 0 )
            return 1;
         else
            return 0;
     }
     else{
         if( sayi % a == 0 ) //a, sayi�y� tam b�l�yorsa b�len say�s�n� (b) 1 art�rarak �agir
            return taumu( sayi, a - 1, b + 1 );
         else //aksi takdirde b�len say�s� artmam��t�r.
            return taumu( sayi, a - 1, b );
     }
}

void main() {
     int x;
     printf("Kontrol etmek istediginiz sayiyi giriniz: ");
     scanf("%d",&x);
     printf("%d", taumu(x, x, 0) );
}

//Tau sayisi ise 1 doner aksi halde 0 doner
