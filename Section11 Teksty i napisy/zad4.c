#include <stdio.h>
#include "letter_changer.h"
#define SIZE 1000

int main() {
    char tekst_g[SIZE+1];
    char wybor_operacji='\0';
    printf("Podaj tekst\n");
    scanf("%1000[^\n]",tekst_g);
    while(getchar()!='\n');
    while (wybor_operacji!='b'&&wybor_operacji!='B'&&wybor_operacji!='s'&&wybor_operacji!='S'){
        printf("Wybierz operacje: B -zamiana na duze, S - zamiana na male\n");
        scanf("%c",&wybor_operacji);
        if(wybor_operacji!='b'&&wybor_operacji!='B'&&wybor_operacji!='s'&&wybor_operacji!='S'){
            printf("Incorrect input\n");
        }
        while(getchar()!='\n');
    }
    if(wybor_operacji=='b'||wybor_operacji=='B'){
        change_letter_size(tekst_g, TO_UPPER);
    } else{
        change_letter_size(tekst_g, TO_LOWER);
    }
    printf("%s",tekst_g);
    return 0;
}