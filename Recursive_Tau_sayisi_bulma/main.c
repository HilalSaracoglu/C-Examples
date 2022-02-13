#include <stdio.h>
#include <stdlib.h>

int taumu( int sayi, int a, int b ) {
     if( a == 1 ){ //temel durumda 1, sayi’yý tam böler. O yüzden aþaðýda b+1 diyoruz.
         if( sayi % (b + 1) == 0 )
            return 1;
         else
            return 0;
     }
     else{
         if( sayi % a == 0 ) //a, sayi’yý tam bölüyorsa bölen sayýsýný (b) 1 artýrarak çagir
            return taumu( sayi, a - 1, b + 1 );
         else //aksi takdirde bölen sayýsý artmamýþtýr.
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
