#include <stdio.h>
#include <math.h>
float circumference(float b);
int main (){
    float diameter;
    printf("Podaj srednice kola, aby uzyskac jego obwod:\n");
    if(scanf("%f",&diameter)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(diameter<=0){
        printf("Incorrect input");
        return 1;
    }
    printf("%f",circumference(diameter));
    return 0;
}
float circumference(float b){
    float circuit =2*M_PI*(b/2);
    if (circuit>0){
        return circuit;
    }
    else{
        return -1;
    }
}