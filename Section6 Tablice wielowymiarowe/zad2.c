#include <stdio.h>
int main (){
    int memory_input_matrice_5x5 [5] [5]={0};
    int output_matrice_5x5 [5] [5]={0};
    printf("Podaj macierz 5x5\n");
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            if((scanf("%d[^\\n]",&memory_input_matrice_5x5 [i][m])!=1)){
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            output_matrice_5x5 [i][m]=memory_input_matrice_5x5[i][m];
        }
    }
    for (int i =0;i<5;i++){
        output_matrice_5x5 [i] [i] = memory_input_matrice_5x5 [i] [4-i];
        output_matrice_5x5 [4-i] [i] = memory_input_matrice_5x5 [4-i] [4-i];
    }
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            printf("%d ",output_matrice_5x5 [i] [m]);
        }
        printf("\n");
    }
    return 0;
}