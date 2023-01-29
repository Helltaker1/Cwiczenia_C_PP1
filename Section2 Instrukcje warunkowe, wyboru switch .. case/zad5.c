#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;
    printf("Podaj pierwsza liczbe calkowita:\n");
    if(scanf("%d",&first)!=1){
        printf("Incorrect Input\n");
        return 1;
    }
    printf("Podaj druga liczbe calkowita:\n");
    if(scanf("%d",&second)!=1){
        printf("Incorrect Input\n");
        return 1;
    }
    if(second ==0){
        printf("Operation not permitted\n");
        return 1;
    }
    if ((int)first%second==0 ){
        printf("%d is divisible by %d\n",first,second);
    }
    else{
        printf("%d is not divisible by %d\n",first,second);
    }
    return 0;
}