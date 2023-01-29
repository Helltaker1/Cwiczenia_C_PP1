#include<stdio.h>
int main() {
    char chosen_option ='D';
    printf("wybierz wariant posilku:\n"
           "A - Breakfast, Lunch and Dinner,\n"
           "B - Lunch and Dinner only,\n"
           "C - Dinner only\n");
    scanf("%c",&chosen_option);
    switch (chosen_option) {
        case 'A':
            printf("you chose Breakfast, lunch and dinner as your meal plan.");
        case 'B':
            switch (chosen_option) {
                case 'B':
                    printf("you chose lunch and Dinner as your meal plan.");
            }
        case 'C':
            switch (chosen_option) {
                case 'C':
                    printf("you chose dinner as your meal plan.");
            }
            return 0;
        default:
            printf("Incorrect input");
            return 1;
    }

}