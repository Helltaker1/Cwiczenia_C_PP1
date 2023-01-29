#include <stdio.h>

long power_rec(int a, int n);

int main (){
    int potega;
    int liczba;
    printf("Podaj a: \n");
    if(scanf("%d",&liczba)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj n: \n");
    if(scanf("%d",&potega)!=1){
        printf("Incorrect input");
        return 1;
    }
    if (potega<0){
        printf("Incorrect input data");
        return 2;
    }
    printf("%ld", power_rec(liczba,potega));
    return 0;
}
long power_rec(int a, int n){
    if (n>=1){
        return a* power_rec(a,n-1);
    }
    if (n==0){
        return 1;
    }
    return 0;
}