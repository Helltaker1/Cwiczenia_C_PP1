#include <stdio.h>

int main() {
    float memory_input_matrice_10x10[10][10] = {0};
    float output_matrice_8x8[8][8] = {0};
    float actual_mean3x3;
    printf("Podaj macierz 10x10\n");
    for (int i = 0; i < 10; i++) {
        for (int m = 0; m < 10; m++) {
            if ((scanf("%f[^\\n]", &memory_input_matrice_10x10[i][m]) != 1)) {
                printf("Incorrect Input");
                return 1;
            }
        }
    }
    for (int i = 1; i < 9; i++) {
        for (int m = 1; m < 9; m++) {
            actual_mean3x3 = (memory_input_matrice_10x10[i - 1][m - 1] + memory_input_matrice_10x10[i - 1][m] +
                              memory_input_matrice_10x10[i - 1][m + 1]
                              + memory_input_matrice_10x10[i][m - 1] + memory_input_matrice_10x10[i][m] +
                              memory_input_matrice_10x10[i][m + 1]
                              + memory_input_matrice_10x10[i + 1][m - 1] + memory_input_matrice_10x10[i + 1][m] +
                              memory_input_matrice_10x10[i + 1][m + 1]) / 9;

            output_matrice_8x8[i - 1][m - 1] = actual_mean3x3;
        }
    }
    for (int i = 0; i < 8; i++) {
        for (int m = 0; m < 8; m++) {
            printf("%.2f ", output_matrice_8x8[i][m]);
        }
        printf("\n");
    }
    return 0;
}