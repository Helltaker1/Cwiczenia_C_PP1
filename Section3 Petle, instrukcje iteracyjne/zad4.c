#include<stdio.h>
int main() {
    int n_silnia =0;
    unsigned long long int result = 1;
    printf("Podaj liczbe:\n");
    if (scanf("%d",&n_silnia)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    if(n_silnia<0){
        printf("Incorrect input\n");
        return 1;
    }
    if(n_silnia<0){
        printf("%d\n",1);
        return 1;
    }
    if(n_silnia>20){
        printf("Incorrect input\n");
        return 1;
    }
    for(int i=1;i<=n_silnia;i++){
        result=result*i;
    }
    printf("%llu",result);
    return 0;
}