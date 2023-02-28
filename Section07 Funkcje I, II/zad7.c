#include <stdio.h>
float poly(float );
int main (){
    float x;
    printf("Podaj x:\n");
    if(scanf("%f \n",&x)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("wynik funkcji to: %f", poly(x));
    return 0;
}
float poly(float x){
    return 5*x*x+12.55*x+0.75;
}