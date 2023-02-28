#include <stdio.h>
int sum_of_digits(long long number);
int main (){
    long long number;
    printf("Podaj liczbe dla ktorej chcesz uzyskac sume cyfr\n");
    if(scanf("%lld",&number)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("%d", sum_of_digits(number));
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