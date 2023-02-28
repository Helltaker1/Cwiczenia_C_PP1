#include <stdio.h>

int sign(int value);

int main() {
    int number;
    printf("Podaj liczbe: \n");
    int x = scanf("%d", &number);
    while (x != 1) {
        printf("Incorrect input");
        return 1;
    }
    switch (sign(number)) {
        case -1:
            printf("negative");
            break;
        case 1:
            printf("positive");
            break;
        case 0:
            printf("zero");
            break;
    }
    return 0;
}

int sign(int value) {
    while (value > 0) {
        return 1;
    }
    while (value < 0) {
        return -1;
    }
    return 0;
}