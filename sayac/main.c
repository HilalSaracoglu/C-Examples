#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    int i,j;
    for(i=0;i<59;i++){
        for(j=0;j<59;j++){
            printf("%02d:%02d\r",i,j);
            Sleep(1000);
        }
    }
    return 0;
}
