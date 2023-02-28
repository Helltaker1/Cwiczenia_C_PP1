#include<stdio.h>
int main() {
    int numbers[11];
    for(int i=0;i<=10;i++){
        numbers[i]=i;
    }
    for(int i=0;i<=10;i++){
        printf("%d,",numbers[i]);
        if(i==10){
            printf("\n");
        }
    }
    return 0;
}