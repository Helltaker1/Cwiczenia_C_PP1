#include <stdio.h>
int main (){
    float memory_input_matrice_10x10 [10] [10]={0};
    float search_matrice_2x2 [2] [2]={0};
    int acount_matrice2x2_in_matrice_10x10 = 0;
    int memory_position_matrice2x2_in_matrice_10x10 [100][2]={0};
    printf("Podaj macierz 10x10\n");
    for (int i =0;i<10;i++){
        for (int m = 0;m<10;m++){
            if((scanf("%f[^\\n]",&memory_input_matrice_10x10 [i][m])!=1)){
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    printf("Podaj macierz 2x2\n");
    for (int i =0;i<2;i++){
        for (int m = 0;m<2;m++){
            if((scanf("%f[^\\n]",&search_matrice_2x2 [i][m])!=1)){
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    for (int i =0;i<9;i++){
        for (int m = 0;m<9;m++){
            if (search_matrice_2x2[0] [0]==memory_input_matrice_10x10 [i][m]) {
                if (search_matrice_2x2[0] [1]==memory_input_matrice_10x10 [i][m+1]) {
                    if (search_matrice_2x2[1] [0]==memory_input_matrice_10x10 [i+1][m]) {
                        if (search_matrice_2x2[1] [1]==memory_input_matrice_10x10 [i+1][m+1]) {
                            memory_position_matrice2x2_in_matrice_10x10 [acount_matrice2x2_in_matrice_10x10][0]=i;
                            memory_position_matrice2x2_in_matrice_10x10 [acount_matrice2x2_in_matrice_10x10][1]=m;
                            acount_matrice2x2_in_matrice_10x10++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",acount_matrice2x2_in_matrice_10x10);
    for( int i = 0;i<acount_matrice2x2_in_matrice_10x10;i++){
        printf("%d %d\n",memory_position_matrice2x2_in_matrice_10x10[i][1],memory_position_matrice2x2_in_matrice_10x10[i][0]);
    }
    return 0;
}