#include <stdio.h>
int GCD(int a, int b);

int main (){
    int first_number;
    int second_number;
    printf("Podaj pierwsza liczbe;\n");
    if(scanf("%d",&first_number)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj druga liczbe;\n");
    if(scanf("%d",&second_number)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("%d", GCD(first_number,second_number));
    return 0;
}

int GCD(int a, int b){
    if(a<0){
        a=a*(-1);
    }
    if(b<0){
        b=b*(-1);
    }
    if(b==0){
        return a;
    }
    if(a==0){
        return b;
    }
    if(a%b==0){
        return b;
    }
    int rest = a%b;
    a=b;
    b = rest;
    return GCD(a,b);
}