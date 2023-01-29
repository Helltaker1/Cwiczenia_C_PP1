#include <stdio.h>

int zamiana_na_cyfry(int rozmiar, int tab_cyfry[], int start, int nr_tab_cyfry);

int liczenie_ciagu(int rozmiar, int tab_cyfry[], int start);

int main() {
    int liczba_ciagu;
    int ciag_cyfr[40000] = {0};
    printf("Podaj liczbe\n");
    if (scanf("%d", &liczba_ciagu) != 1) {
        printf("Incorrect input");
        return 1;
    }
    if (liczba_ciagu < 1 || liczba_ciagu >= 10000) {
        printf("Incorrect input data");
        return 2;
    }
    int ile_cyfr = zamiana_na_cyfry(liczba_ciagu, ciag_cyfr, 0, 0);
    int wynik = liczenie_ciagu(ile_cyfr, ciag_cyfr, 0);
//    for(int i=0;i<ile_cyfr;i++){
//        printf("%d\n",ciag_cyfr[i]);
//    }
    printf("%d", wynik);
    return 0;
}

int zamiana_na_cyfry(int rozmiar, int tab_cyfry[], int start, int nr_tab_cyfry) {
    if (start - 1 != rozmiar) {
        if (start < 10) {
            tab_cyfry[nr_tab_cyfry] = start;
            start++;
            nr_tab_cyfry++;
            return 1 + zamiana_na_cyfry(rozmiar, tab_cyfry, start, nr_tab_cyfry);
        } else {
            if (start < 100) {
                tab_cyfry[nr_tab_cyfry] = start / 10;
                nr_tab_cyfry++;
                tab_cyfry[nr_tab_cyfry] = start % 10;
                start++;
                nr_tab_cyfry++;
                return 2 + zamiana_na_cyfry(rozmiar, tab_cyfry, start, nr_tab_cyfry);
            } else {
                if (start < 1000) {
                    tab_cyfry[nr_tab_cyfry] = start / 100;
                    nr_tab_cyfry++;
                    tab_cyfry[nr_tab_cyfry] = (start % 100) / 10;
                    nr_tab_cyfry++;
                    tab_cyfry[nr_tab_cyfry] = start % 10;
                    start++;
                    nr_tab_cyfry++;
                    return 3 + zamiana_na_cyfry(rozmiar, tab_cyfry, start, nr_tab_cyfry);
                } else {
                    if (start < 10000) {
                        tab_cyfry[nr_tab_cyfry] = start / 1000;
                        nr_tab_cyfry++;
                        tab_cyfry[nr_tab_cyfry] = (start % 1000) / 100;
                        nr_tab_cyfry++;
                        tab_cyfry[nr_tab_cyfry] = ((start % 1000) % 100) / 10;
                        nr_tab_cyfry++;
                        tab_cyfry[nr_tab_cyfry] = start % 10;
                        start++;
                        nr_tab_cyfry++;
                        return 4 + zamiana_na_cyfry(rozmiar, tab_cyfry, start, nr_tab_cyfry);
                    }
                }
            }
        }
    }
    return 0;
}

int liczenie_ciagu(int rozmiar, int tab_cyfry[], int start) {
    if (start != rozmiar) {
        if (start % 2 == 0) {
            int x = -tab_cyfry[start];
            start++;
            return x + liczenie_ciagu(rozmiar, tab_cyfry, start);
        } else {
            int x = tab_cyfry[start];
            start++;
            return x + liczenie_ciagu(rozmiar, tab_cyfry, start);
        }
    }
    if (start % 2 == 1) {
        int x = -tab_cyfry[start];
        return x;
    }
    int x = tab_cyfry[start];
    return x;
}