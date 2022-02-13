#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
     if(argc != 4)
        printf("Hatali sayida arguman!");

     else{
         double a, b, sonuc, hata = 0.0;
         a = atof(argv[1]);
         b = atof(argv[2]);

         if(strcmp(argv[3], "+") == 0)
            sonuc = a + b;
         else if(strcmp(argv[3], "-") == 0)
            sonuc = a - b;
         else if(strcmp(argv[3], "*") == 0)
            sonuc = a * b;
         else if(strcmp(argv[3], "/") == 0)
            sonuc = a / b;
         else
            hata = 1.0;


         if(hata == 1.0)
            printf("Hatali islec!");
         else
            printf("Sonuc: %0.2lf",sonuc);
     }
     return 0;
}
