#include <stdio.h>
int main (){
    int x=8;
    int *px=&x;
    printf("%d %d %p",x,*px,(void*)px);
    *px=5;
    printf("\n%d %d %p",x,*px,(void*)px);
    return 0;
}