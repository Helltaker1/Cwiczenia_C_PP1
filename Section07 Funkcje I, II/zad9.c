#include <stdio.h>
#include <math.h>
float toRadian(float a);
float toDegree(float a);
int main (){
    int choice;
    printf("Wybierz rodzaj konwersji (1=stopnie na radiany, 2=radiany na stopnie):\n");
    if (scanf("%d",&choice)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    if (choice!=1&&choice!=2){
        printf("Incorrect input\n");
        return 1;
    }
    printf("Podaj miare kata\n");
    float angle_measure;
    if (scanf("%f",&angle_measure)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    if(choice==1){
        printf("wynik: %.2f\n", toRadian(angle_measure));
    }
    if(choice==2){
        printf("wynik: %.2f\n", toDegree(angle_measure));
    }
    return 0;
}
float toRadian(float a){
    return ((2*M_PI*a)/360);
}
float toDegree(float a){
    return a*180/M_PI;
}