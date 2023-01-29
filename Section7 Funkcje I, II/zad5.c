#include <stdio.h>
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);
int main (){
    float a,b;
    printf("Podaj pierwsza liczbe:\n");
    if(scanf("%f",&a)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    printf("Podaj druga liczbe:\n");
    if(scanf("%f",&b)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Wynik dodawania to: %f\n", add(a,b));
    printf("Wynik odejmowania to: %f\n", subtract(a,b));
    printf("Wynik mnozenia to: %f\n", multiply(a,b));
    if(b==0){
        printf("Operation not permitted\n");
    }
    else{
        printf("Wynik dzielenia to: %f\n", divide(a,b));
    }
    return 0;
}
float add(float a, float b){
    return a+b;
}
float subtract(float a, float b){
    return a-b;
}
float multiply(float a, float b){
    return a*b;
}
float divide(float a, float b){
    if (b==0){
        return -1;
    }
    return a/b;
}