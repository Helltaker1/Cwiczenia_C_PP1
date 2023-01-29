#include <stdio.h>
int main (){
    int multiplication_table [11] [11];
    for (int i =0;i<11;i++){
        for (int m = 0;m<11;m++){
            multiplication_table [i][m]=i*m;
        }
    }
    for (int i =0;i<11;i++){
        for (int m = 0;m<11;m++){
            printf("%d ",multiplication_table[i][m]);
        }
        printf("\n");
    }
    return 0;
}