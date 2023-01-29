#include <stdio.h>

int main() {
    printf("Podanie czasu w sekundach\n");
    int seconds = 0;
    scanf("%d",&seconds);
    printf("%02d:%02d:%02d\n",seconds%86400 / 3600,(seconds%86400-(seconds%86400 / 3600)*3600)/60,seconds%86400-(seconds%86400 / 3600)*3600-((seconds%86400-(seconds%86400 / 3600)*3600)/60)*60);
    return 0;
}