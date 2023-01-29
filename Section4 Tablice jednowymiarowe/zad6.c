#include <stdio.h>
int main () {
    int tablica [10];
    float suma = 0;
    printf("Podaj liczby");
    for(int i =0;i<10;i+=2){
        if (scanf("%d %d",&tablica[i],&tablica[i+1])!=2){
            printf("Input data type error");
            return 1;
        }
    }
    int min = tablica[0];
    int max = tablica[0];
    for (int m = 0; m<10;m++){
        suma+= tablica[m];
        if(tablica[m]<min){
            min = tablica [m];
        }
        if(tablica[m]>max){
            max = tablica [m];
        }
    }
    printf("%0.4f\n%d\n%d\n",suma/10,max,min);
    return 0;
}