#include<stdio.h>
int main() {
    int first =0;
    int last =0;
    printf("Podaj calkowite MIN:\n");
    if(scanf("%d",&first)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj calkowite MAX:\n");
    if(scanf("%d",&last)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(last<first){
        printf("Incorrect range");
        return 2;
    }
    for(int i = first;i<=last;i++){
        printf("%d\n",i);
    }
    return 0;
}