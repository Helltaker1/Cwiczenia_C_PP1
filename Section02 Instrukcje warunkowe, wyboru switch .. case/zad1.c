#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;
    printf("Podaj dwie liczby calkowite po spacji\n");
    if (scanf("%d", &first) == 0)
    {
        printf("Incorrect input\n");
        return 1;
    }
    else{
        if (scanf("%d", &second) == 0)
        {
            printf("Incorrect input\n");
            return 1;
        }
        else
        {
            printf("%d\n",first+second);
        }

    }


    return 0;
}