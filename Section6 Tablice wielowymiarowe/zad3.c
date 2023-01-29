#include <stdio.h>
int main (){
    int matrice_5x5 [5] [5];
    int columne_matrice_sum = 0;
    int columne_max_sum_index= 0;
    int acount_same=1;
    printf("Podaj macierz 5x5\n");
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            if(scanf("%d[^\\n]",&matrice_5x5[i][m])!=1){
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    int max_columne_matrice_sum = matrice_5x5[0][0]+matrice_5x5[1][0]+matrice_5x5[2][0]+matrice_5x5[3][0]+matrice_5x5[4][0];
    for (int m =1;m<5;m++){
        for (int i = 0;i<5;i++){
            columne_matrice_sum += matrice_5x5 [i][m];
        }
        if (columne_matrice_sum > max_columne_matrice_sum){
            max_columne_matrice_sum=columne_matrice_sum;
            columne_matrice_sum =0;
            columne_max_sum_index=m;
            acount_same =1;
        }
        else if(columne_matrice_sum == max_columne_matrice_sum){
            columne_matrice_sum =0;
            acount_same ++;
        }
        else{
            columne_matrice_sum =0;
        }
    }
    for(int m =0;m<acount_same;m++){
        for (int i =0;i<5;i++){
            printf("%d ",matrice_5x5 [i][columne_max_sum_index]);
        }
        printf("\n");
    }
    return 0;
}