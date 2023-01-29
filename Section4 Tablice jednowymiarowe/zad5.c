#include<stdio.h>
int main() {
    int numbers[10];
    for(int i =0;i<10;i=i+2) {
        printf("Podaj dwie liczby calkowite: 1. 2.\n");
        if (scanf("%d %d", &numbers[i], &numbers[i + 1]) != 2) {
            printf("Input data type error\n");
            return 1;
        }
    }
    for(int i =0;i<10;i++){
        if(numbers[i]%2==0){
            printf("%d even\n",numbers [i]);
        } else{
            printf("%d odd\n",numbers [i]);
        }
    }
    return 0;
}