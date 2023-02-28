#include <stdio.h>
int main () {
    float tablica [10];
    printf("Podaj liczby");
    for(int i =0;i<10;i+=2){
        if (scanf("%f %f",&tablica[i],&tablica[i+1])!=2){
            printf("Input data type error");
            return 1;
        }
    }
    for (int m = 0; m<10;m++){
        printf("%d %f\n",m,tablica[m]);
    }
    return 0;
}