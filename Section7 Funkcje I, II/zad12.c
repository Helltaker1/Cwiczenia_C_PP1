#include <stdio.h>
int find_char(const char tab[], char c);
int rfind_char(const char tab[], char c);
int main (){
    char text [1001];
    char searched_letter;
    printf("Podaj tekst:\n");
    scanf("%1000[^\n]",text);
    while(getchar()!='\n');
    printf("Podaj znak:\n");
    scanf("%c",&searched_letter);
    printf("%d\n", find_char(text,searched_letter));
    printf("%d", rfind_char(text,searched_letter));
    return 0;
}
int find_char(const char tab[], char c){
    int i=0;
    while (tab[i]!='\0'){
        if(tab[i]==c){
            return i;
        }
        i++;
    }
    return -1;
}
int rfind_char(const char tab[], char c){
    int i=0;
    int memory =-1;
    while (tab[i]!='\0'){
        if(tab[i]==c){
            memory = i;
        }
        i++;
    }
    return memory;
}