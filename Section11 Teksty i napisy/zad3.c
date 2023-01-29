#include <stdio.h>
#define SIZE 1001
char* change_letter_size(char* dest, const char* src);

int main() {
    char tekst[SIZE]={0};
    char tekst_wyj[SIZE]={0};
    *(tekst+1000)='\0';
    *(tekst_wyj+1000)='\0';
    printf("Podaj tekst\n");
    scanf("%1000[^\n]",tekst);
    if(change_letter_size(tekst_wyj,tekst)==NULL){
        return 1;
    }
    printf("%s",tekst_wyj);
    return 0;
}

char* change_letter_size(char* dest, const char* src){
    if(src==NULL){
        return NULL;
    }
    int k=0;
    while (*(src+k)!='\0'||k>=1000){
        if(*(src+k)>='a'&&*(src+k)<='z'){
            if(*(src+k)=='n'&&*(src+k-1)=='\\'){
                *(dest+k)=*(src+k);
            } else if (*(src+k)=='t'&&*(src+k-1)=='\\'){
                *(dest+k)=*(src+k);
            } else{
                char x =*(src+k);
                *(dest+k)=x-32;
            }
        } else if(*(src+k)>='A'&&*(src+k)<='Z'){
            char x =*(src+k);
            *(dest+k)=x+32;
        } else{
            *(dest+k)=*(src+k);
        }
        k++;
    }
    return dest;
}