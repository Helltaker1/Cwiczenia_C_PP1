#include<stdio.h>

int main() {
    int first =0;
    int second = 0;
    int third = 0;
    int fourth =0;
    printf("Podaj numer telefonu 000-00-00\n");
    scanf("%d-%d-%d",&second,&third,&fourth);
    printf("Podaj numer kierunkowy00\n");
    scanf("%d",&first);
    printf("(%02d) %03d-%02d-%02d\n",first,second,third,fourth);
    return 0;
}