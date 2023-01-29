#include <stdio.h>
unsigned long long my_atol_rec(const char tab[], int size);
#define SIZE 16
int main (){
    char tab_char_number[SIZE];
    printf("Podaj liczbe\n");
    scanf("%15[^\n]",tab_char_number);
    for(int k=0;k<SIZE;k++){
        if(tab_char_number[k]=='\0'){
            break;
        }
        if(tab_char_number[k]<'0'|| '9'<tab_char_number[k]){
            printf("Incorrect input");
            return 1;
        }
    }
    printf("%llu", my_atol_rec(tab_char_number,SIZE));
    return 0;
}

unsigned long long my_atol_rec(const char tab[], int size){
    int positions=0;
    unsigned long long highest_number;
    for(int k=0;k<size;k++){
        if(tab[k]=='\0'){
            break;
        }
        if(tab[k]<'0'|| '9'<tab[k]){
            return 0;
        }
        positions++;
    }
    if(positions-1==0) {
        return (tab[0]-'0');
    }

    highest_number= (tab[0]-'0');
    for (int k =0;k<positions-1;k++) {
        highest_number= highest_number*10;
    }
    char new_tab[1000];
    for(int k =0;k<=positions;k++){
        new_tab[k]=tab[k+1];
    }
    return highest_number+ my_atol_rec(new_tab,size);
}