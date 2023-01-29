#include <stdio.h>
#define SIZE 1000
char * my_strpbrk(const char *tekst, const char *samogloski);
int main()
{
    char podany_tekst[SIZE+1];
    char *spis_samoglosek = "AIUEOYaiueoy";
    printf("Podaj tekst:\n");
    scanf("%1000[^\n]",podany_tekst);
    int ile_samoglosek = 0;
    char *p_tekst = podany_tekst;
    p_tekst = my_strpbrk(p_tekst, spis_samoglosek);
    while (p_tekst)
    {
        ile_samoglosek++;
        p_tekst++;
        p_tekst = my_strpbrk(p_tekst, spis_samoglosek);
    }
    printf("%d\n", ile_samoglosek);
    return 0;
}

char * my_strpbrk(const char *tekst, const char *samogloski){
    while (*tekst){
        for (int nr_samogloski = 0; *(samogloski+nr_samogloski) != '\0'; nr_samogloski++){
            if (*tekst == *(samogloski+nr_samogloski)){
                return (char*)tekst;
            }
        }
        tekst++;
    }
    return NULL;
}