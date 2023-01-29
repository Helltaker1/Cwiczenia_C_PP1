#include <stdio.h>
float add(float, float);
int main (){
    float a,b;
    printf("Podaj pierwsza liczbe: ");
    if(scanf("%f",&a)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("\nPodaj druga liczbe: ");
    if(scanf("%f",&b)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("\nWynik dodawania to: %f", add(a,b));
    return 0;
}
float add(float a, float b){
    return a+b;
}