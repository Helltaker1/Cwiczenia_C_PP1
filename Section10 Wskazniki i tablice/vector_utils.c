#include <stdio.h>
#include "vector_utils.h"
int read_vector(int *tab, int size, int stop_value){
    int k=0;
    if(size<=0){
        return -1;
    }
    if(tab==NULL){
        return -1;
    }
    if(scanf("%d",tab)!=1){
        while(getchar()!='\n');
        return -2;
    }
    if(*tab==stop_value){
        while(getchar()!='\n');
        return 0;
    }
    for(k=1;k<size;k++){
        if(scanf("%d",tab+k)!=1){
            while(getchar()!='\n');
            return -2;
        }
        if(*(tab+k)==stop_value){
            break;
        }
    }
    while(getchar()!='\n');
    return k;
}



void display_vector(const int* tab, int size){
    if(size<=0){
        return;
    }
    for(int k=0;k<size;k++){
        printf("%d ",*(tab+k));
    }
    printf("\n");
    return;
}