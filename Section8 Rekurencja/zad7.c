#include <stdio.h>
long long binary_exponentiation(long long a, unsigned int n);

int main (){
    long long podstawa;
    unsigned int potega;
    printf("Podaj podstawe\n");
    if(scanf("%lld",&podstawa)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj potege\n");
    if(scanf("%u",&potega)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("wynik: %lld", binary_exponentiation(podstawa,potega));
    return 0;
}

long long binary_exponentiation(long long a, unsigned int n){
    if (n==0){
        return 1;
    }
    if (n%2==1){
        return a* binary_exponentiation(a*a,(n-1)/2);
    }
    return binary_exponentiation(a*a,n/2);
}