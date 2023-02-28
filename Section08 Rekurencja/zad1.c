#include <stdio.h>

unsigned long factorial_rec(int n);

int main (){
    int n;
    printf("Podaj n:\n");
    if(scanf("%d",&n)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(n<0 || n>20){
        printf("Incorrect input data");
        return 2;
    }
    printf("Wynik: %ld", factorial_rec(n));
    return 0;
}

unsigned long factorial_rec(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return n*(factorial_rec(n-1));
}