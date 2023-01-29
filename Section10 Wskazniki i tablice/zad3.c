#include <stdio.h>

int main() {
    int T[10];
    int *pT=T;
    for (int i =0;i<10;i++){
        *(pT+i)=i;
        printf("%d ",*(pT+i));
    }
}