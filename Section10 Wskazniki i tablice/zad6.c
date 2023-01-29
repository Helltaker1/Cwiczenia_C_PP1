#include <stdio.h>

#define SIZE 100

int main() {
    float T[SIZE];
    float *pT=T;
    int ile_liczb;
    float suma=0;
    printf("Ile chcesz posac liczb?\n");
    if(scanf("%d",&ile_liczb)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(ile_liczb<=0||ile_liczb>100){
        printf("Incorrect input data");
        return 2;
    }
    printf("Podaj liczby\n");
    for(int i=0;i<ile_liczb;i++){
        if(scanf("%f",(pT+i))!=1){
            printf("Incorrect input");
            return 1;
        }
        suma+=*(pT+i);
    }
    for (int i =ile_liczb-1;i>=0;i--){
        printf("%f ",*(pT+i));
    }
    printf("\nSuma: %.2f",suma);
    printf("\nSrednia: %.2f",suma/ile_liczb);
    return 0;
}