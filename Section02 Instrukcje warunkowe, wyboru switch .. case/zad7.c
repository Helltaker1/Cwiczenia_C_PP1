#include <stdio.h>
#include <math.h>

int main() {
    float a =0;
    float b = 0;
    float c = 0;
    float delta = 0;
    printf("Program rozwiazujacy rownanie kwadratowe postaci 0 = ax^2 + bx + c\n");
    printf("Podaj a: \n");
    scanf("%f",&a);
    printf("Podaj b: \n");
    scanf("%f",&b);
    printf("Podaj c: \n");
    scanf("%f",&c);
    delta = (b*b)-(4*a*c);

    // nieskonczonosc rozw
    if (a==0&&b==0&&c==0){
        printf("nieskonczonosc \n");
        return 0;
    }
    //1 rozw
    if(a==0&&b!=0){
        printf("jeden pierwiastek: %f \n",(-c)/b);
        return 0;
    }
    if(delta==0&&a!=0){
        printf("jeden pierwiastek: %f \n",(-b)/(2*a));
        return 0;
    }
    //brak
    if (delta<0&&a!=0){
        printf("brak \n");
        return 0;
    }
    if (a==0&&b==0&&c!=0){
        printf("brak \n");
        return 0;
    }
    //2 rozw
    if(delta>0){
        printf("dwa pierwiastki: %f %f\n",((-b- sqrt(delta))/(2*a)),((-b+sqrt(delta))/(2*a)));
        return 0;
    }

}