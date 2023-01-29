#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main() {
    srand(time(NULL));
    float tab_random_numbers[SIZE];
    float *pT=tab_random_numbers;
    for (int i =0;i<SIZE;i++){
        *(pT+i)=rand()%20+(rand()%10)*0.1;
        printf("%.1f ",*(pT+i));
    }
    printf("\n");
    for (int i =0;i<SIZE;i+=2){
        printf("%.1f ",*(pT+i));
    }
    return 0;
}