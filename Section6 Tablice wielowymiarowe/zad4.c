#include <stdio.h>
int main (){
    int matrice_5x5AtoC [5] [5];
    int matrice_5x5B [5] [5];
    printf("Podaj macierz A 5x5\n");
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            if(scanf("%d[^\\n]",&matrice_5x5AtoC[i][m])!=1){
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    printf("Podaj macierz B 5x5\n");
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            if(scanf("%d[^\\n]",&matrice_5x5B[i][m])!=1){
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            if(matrice_5x5AtoC[i][m]<matrice_5x5B[i][m]){
                matrice_5x5AtoC[i][m]=matrice_5x5B[i][m];
            }
            printf("%d ",matrice_5x5AtoC[i][m]);
        }
        printf("\n");
    }
    return 0;
}