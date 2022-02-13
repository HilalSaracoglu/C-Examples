#include <stdio.h>
#include <stdlib.h>

int main()
{
    char izinliler[63];
    izinliler[62]= '\0';

    for(int i=0; i<26; i++)
        izinliler[i]=65+i;

    for(int i=0; i<26; i++)
        izinliler[26+i]=97+i;

    for(int i=0; i<10; i++)
        izinliler[52+i]=48+i;

    printf("Izin verilen karakterler:\n");
    puts(izinliler);
    printf("\n\n");
    printf("Izin verilen karakterleri kullanarak yazi yazabilirsiniz:\n");

    char girdi;
    int i;
    while(i){
        girdi=getch();
        if(girdi=='*')
            break;

        else{
            for(i=0; i<62; i++){
                if(girdi==izinliler[i])
                    break;
            }
            if(i==62)
                ;
            else
                putch(girdi);
        }
    }
    return 0;
}
