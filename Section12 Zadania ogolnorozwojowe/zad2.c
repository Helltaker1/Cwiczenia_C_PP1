#include <stdio.h>
#include "math.h"

int main() {
    char powierzchnia[6][244];
    int rzad;
    printf("Podaj rzad zbioru Cantora\n");
    if (scanf("%d", &rzad) != 1) {
        printf("Incorrect input");
        return 1;
    }
    if (rzad < 1 || rzad > 6) {
        printf("Incorrect input data");
        return 2;
    }
    int wymiar = pow(3, rzad - 1);
//stworzenie powierzchni z '_'
    for (int w = 0; w < rzad; w++) {
        for (int k = 0; k < wymiar; k++) {
            powierzchnia[w][k] = '_';
        }
    }

    //tworzenie "dziur"
    for (int krok = 1; krok < rzad; krok++) {
        int rozmiar = wymiar / (pow(3, krok));
        int staly_rozmiar = rozmiar;
        do {
            for (int w = krok; w < rzad; w++) {
                for (int i = rozmiar; i < rozmiar + staly_rozmiar; i++) {
                    powierzchnia[w][i] = ' ';
                }
            }
            rozmiar += 2 * staly_rozmiar;
        } while (rozmiar < wymiar);
    }

    //zakonczenie powierzchni '/0'
    int max = wymiar;
    for (int w = 0; w < rzad; w++) {
        powierzchnia[w][max] = '\0';
    }
    //wyswietlanie powierzchni
    for (int w = 0; w < rzad; w++) {
        printf("%s\n", *(powierzchnia + w));
    }
    return 0;
}