#include <stdio.h>

int main() {
    int first_number =0;
    int second_number =0;
    char x = ' ';
    printf("Podaj liczbe zespolona: \n");
    if(scanf("%d%ci%d",&first_number,&x,&second_number)!=3){
        printf("incorrect input\n");
        return 1;
    }
    else{
        if (second_number<0){
            printf("incorrect input\n");
            return 1;
        }
        if(x=='+'){
            printf("Czesc rzeczywista: %d\nCzesc urojona: %d\n",first_number,second_number);
            return 0;
        }
        if(x=='-'){
            printf("Czesc rzeczywista: %d\nCzesc urojona: -%d\n",first_number,second_number);
            return 0;
        }
        printf("incorrect input\n");
        return 1;

    }
}