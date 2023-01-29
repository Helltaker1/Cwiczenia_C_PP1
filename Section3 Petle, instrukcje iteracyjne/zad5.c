#include<stdio.h>
int main() {
    float current =0;
    float previous = 0;
    printf("Podaj liczbe\n");
    if(scanf("%f",&current)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(current==0){
        return 0;
    }
    do{
        previous=current;
        printf("Podaj liczbe\n");
        if(scanf("%f",&current)!=1){
            printf("Incorrect input");
            return 1;
        }
        if(current!=0){
            printf("%f\n",current-previous);
        }
    }     while (current!=0);
    return 0;
}