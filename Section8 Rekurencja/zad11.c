#include <stdio.h>
int is_prime_rec(int a, int b);
int main (){
    int first_actually_number;
    int last_number;
    int something_prime_number=0;
    printf("Podaj pierwsza liczbe:\n");
    if(scanf("%d",&first_actually_number)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj ostatnia liczbe:\n");
    if(scanf("%d",&last_number)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(first_actually_number>last_number){
        printf("Incorrect input");
        return 1;
    }
    DODAWANIE_LICZNIKA:
    if(is_prime_rec(first_actually_number,first_actually_number)==1){
        printf("%d ",first_actually_number);
        something_prime_number=1;
    }
    if(first_actually_number<last_number){
        first_actually_number++;
        goto DODAWANIE_LICZNIKA;
    }
    if(something_prime_number==0){
        printf("Nothing to show");
        return 2;
    }
    return 0;
}
int is_prime_rec(int a, int b){
    if (a<=1){
        return 0;
    }
    if(a==2){
        return 1;
    }
    if(b==2||b==1){
        if(a%b!=0){
            return 1;
        }
        return 0;
    }
    b-=1;
    int n = a%b* is_prime_rec(a,b);
    if(n>0){
        return 1;
    }
    return 0;
}