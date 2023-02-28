#include <stdio.h>
int add(int, int);
int main (){
    int a,b;
    printf("Podaj pierwsza liczbe: ");
    if(scanf("%d",&a)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("\nPodaj druga liczbe: ");
    if(scanf("%d",&b)!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("\nWynik dodawania to: %d", add(a,b));
    return 0;
}
int add(int a, int b){
    return a+b;
}