#include <stdio.h>
#include <math.h>
int starts_with(const char tab[], const char tab2[]);
int ends_with(const char tab[], const char tab2[]);
int main (){
    char first_text [101];
    char second_text [101];
    printf("Podaj tekst:\n");
    scanf("%100[^\n]",first_text);
    while(getchar()!='\n');
    printf("Podaj drugi tekst do porownania:\n");
    scanf("%100[^\n]",second_text);
    printf("start %d\n", starts_with(first_text,second_text));
    printf("end %d\n", ends_with(first_text,second_text));
    return 0;
}
int starts_with(const char tab[], const char tab2[]){
    int k=0;
    while (tab2[k]!='\0'){
        k++;
    }
    for (int i=0;i<k;i++){
        if(tab2[i]!=tab[i]){
            return 0;
        }
    }
    return 1;
}
int ends_with(const char tab[], const char tab2[]){
    int k=0;
    int m =0;
    while (tab[m]!='\0'){
        m++;
    }
    m--;
    while (tab2[k]!='\0'){
        k++;
    }
    k--;
    for (int i=0;i<k;i++){
        if(tab2[k-i]!=tab[m-i]){
            return 0;
        }
    }
    return 1;
}