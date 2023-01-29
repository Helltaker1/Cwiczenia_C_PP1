#include <stdio.h>
#define SIZE 1001
int marks_counter(const char* text, int* uppercase, int* lowercase, int* whitespace);

int main() {
    char tekst[SIZE]={0};
    *(tekst+SIZE)='\0';
    int ile_duzych=0;
    int ile_malych=0;
    int ile_bialych_znakow=0;
    int *pile_duzych=&ile_duzych;
    int *pile_malych=&ile_malych;
    int *pile_bialych_znakow=&ile_bialych_znakow;
    printf("Podaj tekst\n");
    scanf("%1000[^\n]",tekst);
    if(marks_counter(tekst, pile_duzych, pile_malych, pile_bialych_znakow)==1){
        return 1;
    }
    printf("%d\n%d\n%d\n",ile_duzych,ile_malych,ile_bialych_znakow);
    return 0;
}

int marks_counter(const char* text, int* uppercase, int* lowercase, int* whitespace){
    if(text==NULL || uppercase==NULL || lowercase==NULL || whitespace==NULL){
        return 1;
    }
    *uppercase=0;
    *lowercase=0;
    *whitespace=0;
    int nr_znaku_w_tekscie=0;
    while (*(text+nr_znaku_w_tekscie)!='\0'){
        if(*(text+nr_znaku_w_tekscie)>='a' && *(text+nr_znaku_w_tekscie)<='z'){
            *lowercase+=1;
        }
        if(*(text+nr_znaku_w_tekscie)>='A' && *(text+nr_znaku_w_tekscie)<='Z'){
            *uppercase+=1;
        }
        if(*(text+nr_znaku_w_tekscie)==' ' || *(text+nr_znaku_w_tekscie)=='\t'||*(text+nr_znaku_w_tekscie)=='\n'){
            *whitespace+=1;
        }
        nr_znaku_w_tekscie++;
    }
    return 0;
}