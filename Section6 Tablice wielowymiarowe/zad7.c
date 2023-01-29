#include <stdio.h>
int main (){
    int matrice_5x10 [5] [10];
    int matrice_10x5 [10] [5];
    printf("Podaj macierz 5x10\n");
    for (int i =0;i<5;i++){
        for (int m = 0;m<10;m++){
            if(scanf("%d[^\\n]",&matrice_5x10[i][m])!=1){
                printf("Incorrect Input");
                return 1;
            }
            matrice_10x5 [m] [i] = matrice_5x10 [i] [m];
        }
    }
    for (int m =0;m<10;m++){
        for (int i = 0;i<5;i++){
            printf("%d ",matrice_10x5 [m] [i]);
        }
        printf("\n");
    }
    return 0;
}