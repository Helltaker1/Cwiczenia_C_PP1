#include<stdio.h>

int main() {
    float result = 0;
    float scaning_number = 0;
    for(int i =1;i<=10;i++)
    {
        printf("Podaj %d liczbe: ",i);
        if(scanf("%f",&scaning_number)!=1){
            printf("\nIncorrect Input");
            return 1;
        }
        result= result+scaning_number;

    }
    printf("%f",result);
    return 0;
}