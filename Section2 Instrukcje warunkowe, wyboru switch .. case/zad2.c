#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    char x;
    char y = ' ';
    printf("Podaj numer telefonu w formacie (dd) ddd-dd-dd)\n");
    if (scanf("(%d)%c%d-%d-%d", &first, &x, &second, &third, &fourth) != 5) {
        printf("Incorrect input\n");
        return 1;
    }
    if (x!=y ){
        printf("Incorrect input\n");
        return 1;
    }
    printf("Numer kierunkowy: %02d\nNumer telefonu: %03d-%02d-%02d\n", first, second, third, fourth);
    return 0;
}