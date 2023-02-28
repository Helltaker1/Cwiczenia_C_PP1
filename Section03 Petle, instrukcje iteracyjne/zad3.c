#include<stdio.h>
#include <math.h>

int main() {
    float R = 0;
    int z = 0;

    do {
        printf("Podaj promien kola: \n");
        z = scanf("%f",&R);
        if(z!=1){
            printf("Incorrect Input\n");
            while(getchar()!='\n');
        }else{
            if (R<=0){
                printf("Incorrect Input\n");
                while(getchar()!='\n');
            }
        }
    }while (R<=0||z!=1);
    printf("Obwod kola: %0.3f \nPole kola: %0.3f",2*M_PI*R,M_PI*R*R);
    return 0;
}