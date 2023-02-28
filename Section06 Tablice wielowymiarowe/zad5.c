#include <stdio.h>
int main (){
    int matrice_5x5 [5] [5];
    int matrice_sum = 0;
    printf("Podaj macierz 5x5\n");
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            if(scanf("%d[^\\n]",&matrice_5x5[i][m])!=1){
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    for (int i =0;i<5;i++){
        for (int m = 0;m<5;m++){
            if(i==0||(i==1 && m>0)||(i==2 && m>1)||(i==3 && m>2)||(i==4 && m>3)){
                matrice_sum += matrice_5x5 [i][m];
            }
        }

    }
    printf("%d\n",matrice_sum);
    return 0;
}