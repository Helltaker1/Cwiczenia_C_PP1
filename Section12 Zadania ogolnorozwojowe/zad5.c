#include <stdio.h>

#define SIZE 1001

int sprawdzenie_wejscia(char tab[], int nr_znaku);

int dzialanie_na_polimerach(char tab1[], char tab2[], int nr_znaku1, int nr_znaku2, int powtorz);

int kopiuj(char tab1[], char tab2[], int nr_znaku1);

int petla(char tab1[], char tab2[], int nr_znaku1, int nr_znaku2, int powtorz);

int main() {
    char tab_pierwsza[SIZE];
    tab_pierwsza[1000] = '\0';
    char tab_druga[SIZE];
    tab_druga[1000] = '\0';
    printf("Podaj polimer\n");
    scanf("%1000[^\n]", tab_pierwsza);
    if (sprawdzenie_wejscia(tab_pierwsza, 0)) {
        printf("Incorrect input data");
        return 2;
    }
    petla(tab_pierwsza, tab_druga, 0, 0, 0);
    if(tab_druga[0]=='\0'){
        printf("Nothing to show");
        return 0;
    }
    printf("%s", tab_druga);
    return 0;
}

int sprawdzenie_wejscia(char tab[], int nr_znaku) {
    if (tab[nr_znaku] != '\0') {
        if ((tab[nr_znaku] >= 'a' && tab[nr_znaku] <= 'z') || (tab[nr_znaku] >= 'A' && tab[nr_znaku] <= 'Z')) {
            nr_znaku++;
            return sprawdzenie_wejscia(tab, nr_znaku);
        }
        return -1;
    }
    return 0;
}

int dzialanie_na_polimerach(char tab1[], char tab2[], int nr_znaku1, int nr_znaku2, int powtorz) {
    if (tab1[nr_znaku1] != '\0') {
        if (tab1[nr_znaku1] == tab1[nr_znaku1 + 1] + 32 || tab1[nr_znaku1] == tab1[nr_znaku1 + 1] - 32) {
            powtorz = -1;
            nr_znaku1 += 2;
            return dzialanie_na_polimerach(tab1, tab2, nr_znaku1, nr_znaku2, powtorz);
        }
        tab2[nr_znaku2] = tab1[nr_znaku1];
        nr_znaku1++;
        nr_znaku2++;
        return dzialanie_na_polimerach(tab1, tab2, nr_znaku1, nr_znaku2, powtorz);
    }
    tab2[nr_znaku2] = '\0';
    return powtorz;
}

int petla(char tab1[], char tab2[], int nr_znaku1, int nr_znaku2, int powtorz) {
    if (dzialanie_na_polimerach(tab1, tab2, 0, 0, 0) == -1) {
        kopiuj(tab1, tab2, 0);
        return petla(tab1, tab2, 0, 0, 0);
    }
    return 0;
}

int kopiuj(char tab1[], char tab2[], int nr_znaku) {
    if (tab2[nr_znaku] != 0) {
        tab1[nr_znaku] = tab2[nr_znaku];
        nr_znaku++;
        return kopiuj(tab1, tab2, nr_znaku);
    }
    tab1[nr_znaku] = tab2[nr_znaku];
    return 0;
}