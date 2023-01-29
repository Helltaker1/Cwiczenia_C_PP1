#include<stdio.h>

int main() {
    float acount =0;
    int months =0;
    printf("podaj kwote poczatkowa:\n");
    if(scanf("%f",&acount)!=1){
        printf("Incorrect Input");
        return 1;
    }
    if(acount<0) {
        printf("Incorrect Input");
        return 1;
    }
    printf("podaj liczbe miesiecy:\n");
    if(scanf("%d",&months)!=1) {
        printf("Incorrect Input");
        return 1;
    }
    if(months<0) {
        printf("Incorrect Input");
        return 1;
    }
    for(int i =0;i<months;++i){
        acount = acount*(1.01);
    }
    printf("kwota koncowa: %0.2f",acount);
    return 0;
}