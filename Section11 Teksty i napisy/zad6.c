#include <stdio.h>
#include <string.h>
#define SIZE 91
int sort(char const*ptrs[], int size);

int main() {
    int ile_tytulow=0;
    char const *tablica_wskaznikow_na_ciagi_znakow[10];
    char teksty [10][SIZE]={0};
    for(int i=0;i<10;i++){
        *(*(teksty+i)+90)='\0';
    }
    printf("Podaj tytuly\n");
    for(int i =0;i<10;i++){
        if(scanf("%90[^\n]",*(teksty+i))!=1){
            break;
        }
        ile_tytulow++;
        while(getchar()!='\n');
    }
    if(ile_tytulow==0){
        printf("Not enough data available");
        return 3;
    }
    for(int i=0;i<ile_tytulow;i++){
        *(tablica_wskaznikow_na_ciagi_znakow+i)=*(teksty+i);
    }
    sort(tablica_wskaznikow_na_ciagi_znakow, ile_tytulow);
    for(int i =0;i<ile_tytulow;i++){
        printf("%s\n",*(tablica_wskaznikow_na_ciagi_znakow+i));
    }
    return 0;
}

int sort(char const*ptrs[], int size)
{
    if (ptrs == NULL || size <= 0)
    {
        return 1;
    }
    for (int k = 0; k < size - 1; k++)
    {
        for (int m = k + 1; m < size; m++)
        {
            int wynik = strcmp(*(ptrs + k), *(ptrs + m));
            if (wynik > 0)
            {
                char const*pamiec = *(ptrs + k);
                *(ptrs+k) = *(ptrs+m);
                *(ptrs+m) = pamiec;
            }
        }
    }
    return 0;
}