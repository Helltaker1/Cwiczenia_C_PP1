#include <stdio.h>
#include "letter_changer.h"

char* change_letter_size(char *txt, enum letter_changer_t c){
    if(txt==NULL){
        return NULL;
    }
    if(c != TO_UPPER && c != TO_LOWER){
        return NULL;
    }
    if(c == TO_UPPER){
        for(int k=0;*(txt+k)!='\0';k++){
            *(txt+k)= to_upper(*(txt+k));
        }
    } else{
        for(int k=0;*(txt+k)!='\0';k++){
            *(txt+k)= to_lower(*(txt+k));
        }
    }
    return txt;
}
char to_lower(char x){
    if(x>='A' && x<='Z'){
        x+=' ';
    }
    return x;
}
char to_upper(char x){
    if(x>='a' && x<='z'){
        x-=' ';
    }
    return x;
}