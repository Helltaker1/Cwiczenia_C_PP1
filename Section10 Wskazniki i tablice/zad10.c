#include <stdio.h>
int swap(int*a, int*b);

int main () {
    int a;
    int b;
    printf("Podaj dwie liczby\n");
    if(scanf("%d %d",&a,&b)!=2){
        printf("Incorrect input");
        return 1;
    }
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

int swap(int*a, int*b){
    if(a==NULL || b==NULL){
        return 1;
    }
    int memory;
    memory=*a;
    *a=*b;
    *b=memory;
    return 0;

}