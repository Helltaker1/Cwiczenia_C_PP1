#include <stdio.h>

int main() {
    int d = 0;
    int m = 0;
    int y = 0;
    printf("Podaj date w formacie dd-mm-yyyy\n");
    scanf("%2d-%d-%d",&d,&m,&y);
    printf("%-11s%02d\n%-11s%02d\n%-9s%04d\n", "Day:", d, "Month:", m, "Year:", y);
    return 0;
}