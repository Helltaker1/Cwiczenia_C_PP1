#include <stdio.h>

unsigned long sum_rec(int n);

int main (){
    int how_many_add;
    printf("Podaj liczbe, dla ktorej chcesz policzyc sume:\n");
    if(scanf("%d",&how_many_add)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(how_many_add<=0){
        printf("Incorrect input data");
        return 2;
    }
    printf("%ld", sum_rec(how_many_add));
    return 0;
}
unsigned long sum_rec(int n){
    if(n<=0){
        return 0;
    }
    if(n>1){
        return n+ sum_rec(n-1);
    }
    return n;
}