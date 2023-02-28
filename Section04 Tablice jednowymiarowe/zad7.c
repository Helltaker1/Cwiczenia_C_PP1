#include <stdio.h>
int main () {
    int tablica [100];
    float suma = 0;
    int x =0;
    printf("Podaj liczby");
    for(int i =0;i<100;i++){
        if (scanf("%d",&tablica[i])!=1){
            printf("Incorrect input");
            return 1;
        }
        if (tablica[i]==-1){
            break;
        }
        x++;
    }
    int min = tablica[0];
    int max = tablica[0];
    for (int m = 0; m<x;m++){
        suma+= tablica[m];
        if(tablica[m]<min){
            min = tablica [m];
        }
        if(tablica[m]>max){
            max = tablica [m];
        }
    }
    int w = suma;
    printf("%d\n%d\n%d\n%f\n%d\n",x,min,max,suma/x,w);
    return 0;
}