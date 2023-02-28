#include <stdio.h>
long int fibonacci(int n);

int main (){
    int n;
    printf("Jaki wyrac ciagu Fibonacciego wypisac?\n");
    if(scanf("%d",&n)!=1){
        printf("Incorrect input");
        return 1;
    }
    if (n<0){
        printf("Incorrect input data");
        return 2;
    }
    printf("%ld", fibonacci(n));
    return 0;
}

long int fibonacci(int n){
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    return fibonacci(n-1)+ fibonacci(n-2)+n;
}