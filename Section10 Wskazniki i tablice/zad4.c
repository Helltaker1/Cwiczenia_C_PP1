#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main() {
    srand(time(NULL));
    int tab_random_numbers[SIZE];
    int *pT=tab_random_numbers;
    for (int i =0;i<SIZE;i++){
        *(pT+i)=rand()%20;
        printf("%d ",*(pT+i));
    }
    printf("\n");
    for (int i =0;i<SIZE;i+=2){
        printf("%d ",*(pT+i));
    }
    return 0;
}