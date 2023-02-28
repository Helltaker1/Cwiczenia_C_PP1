#include<stdio.h>
#include <math.h>
int main() {
    float numbers [1000] ={0};
    float suma =0;
    float suma_up = 0;
    float suma_down = 0;
    int i;
    printf("Podaj liczby\n");
    for (i =0;i<1000;i++){
        if(scanf("%f",&numbers[i])!=1){
            printf("Incorrect input\n");
            return 1;
        }
        if(numbers[0]==0){
            printf("Brak danych\n");
            return 0;
        }
        if(numbers[i]==0){
            break;
        }
        suma=suma+numbers[i];
    }
    float srednia = suma/i;
    for (i =0;i<1000;i++){
        if(numbers[i]>srednia){
            suma_up =suma_up+numbers[i];
        }
    }
    for (i =0;i<1000;i++){
        if(numbers[i]<srednia){
            suma_down =suma_down+numbers[i];
        }
    }
    printf("%0.2f\n",srednia);
    printf("%0.2f\n",suma_up);
    printf("%0.2f\n",suma_down);
    return 0;
}