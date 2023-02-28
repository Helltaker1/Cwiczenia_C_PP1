#include <stdio.h>

long power_rec(int a, int n);

int is_divisible_by_7(int number);

int main() {
    int number;
    printf("Podaj liczbe dla jakiej chcesz sprawdzic podzielnosc przez 7\n");
    if (scanf("%d", &number) != 1) {
        printf("Incorrect input");
        return 1;
    }
    if (is_divisible_by_7(number) == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

long power_rec(int a, int n) {
    if (n >= 1) {
        return a * power_rec(a, n - 1);
    }
    if (n == 0) {
        return 1;
    }
    return 0;
}

int is_divisible_by_7(int number) {
    if (number == 0 || number == 7 || number == -7) {
        return 1;
    }
    if (-10 < number && number < 10) {
        return 0;
    }
    if (number < 0) {
        number = number * (-1);
    }
    if (number > 40353607) {
        number -= 40353607;
    }
    if (number > 5764801) {
        number -= 5764801;
    }
    //
    if (number > 823543) {
        number -= 823543;
    }
    if (number > 117649) {
        number -= 117649;
    }
    if (number > 2401) {
        number -= 2401;
    }
    if (number > 343) {
        number -= 343;
    }
    if (number > 343) {
        number -= 343;
    }
    if (number > 7) {
        number -= 7;
    }
    return is_divisible_by_7(number);
}