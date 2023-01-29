#include <stdio.h>
float quadratic_equation(float a, float b, float c, float x);
int main (){
    float a,b,c,x;
    printf("Podaj rownanie w postaci: ax^2+bx+c\n");
    if(scanf("%fx^2%fx%f",&a,&b,&c)!=3){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj x\n");
    if(scanf("%f",&x)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("%f", quadratic_equation(a,b,c,x));
    return 0;
}
float quadratic_equation(float a, float b, float c, float x){
    return a*x*x+b*x+c;
}