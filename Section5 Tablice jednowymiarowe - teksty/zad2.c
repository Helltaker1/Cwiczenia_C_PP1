#include <stdio.h>
int main () {
    char tekst[31];
    printf("Jak masz na imie?\n");
    scanf("%30s", tekst);
    printf("Witaj %s!",tekst);
}