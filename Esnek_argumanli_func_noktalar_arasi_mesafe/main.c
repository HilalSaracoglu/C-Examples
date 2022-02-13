#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

void mesafeler(int n, ...){

    int noktalar[100][2];
    va_list liste;
    va_start(liste,n);

    for(int i=0; i<n; i++){
        noktalar[i][0]=va_arg(liste,int);
        noktalar[i][1]=va_arg(liste,int);
    }

    va_end(liste);

    float mes;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            mes=sqrt(pow((noktalar[i][0]-noktalar[j][0]),2.0) + pow((noktalar[i][1]-noktalar[j][1]),2.0));
            printf("nokta%d ile nokta%d arasindaki mesafe: %f\n", i+1,j+1,mes);
        }
    }

}

int main()
{
    mesafeler(2,5,8,-4,9);
    return 0;
}
