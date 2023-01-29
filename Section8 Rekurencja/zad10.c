#include <stdio.h>
int sum_of_digits(long long number);
int is_divisible_by_3(int number);
int main (){
    long long number;
    printf("Podaj liczbe ktorej chcesz sprawdzic podzielnosc przez 3\n");
    if(scanf("%lld",&number)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(is_divisible_by_3(number)==1){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}
int sum_of_digits(long long number){
    if(number<0){
        number=number*(-1);
    }
    if(number<10)
        return number;
    return number%10+ sum_of_digits((number-(number%10))/10);
}
int is_divisible_by_3(int number){
    if(number<0){
        number=number*(-1);
    }
    if(number==0){
        return 1;
    }
    if(number<3){
        return 0;
    }
    if(number>1000000){
        return is_divisible_by_3(number-999999);
    }
    if(number>1000){
        return is_divisible_by_3(number-999);
    }
    return is_divisible_by_3(number-3);
}