#include <stdio.h>
#include "vector_utils.h"
#define SIZE 100


int sort(int* tab, int size);

int main() {
    int T[SIZE];
    int new_size;
    printf("Podaj ciag liczb\n");
    new_size= read_vector(T,SIZE,-1);
    if(new_size==-2){
        printf("Incorrect input\n");
        return 1;
    }
    if(new_size==-1 || *T==-1){
        printf("Not enough data available\n");
        return 3;
    }
    if(sort(T,new_size)!=0){
        printf("Not enough data available\n");
        return 3;
    }
    display_vector(T,new_size);
    return 0;
}
int sort(int* tab, int size){
    if(size<=0 ||tab==NULL){
        return 1;
    }
    if(size==1){
        return 0;
    }
    int min;
    int memory2;
    int index_min;
    for(int k=0;k<size;k++){
        min=*(tab+k);
        index_min=k;
        for(int i=k;i<size;i++){
            if(*(tab+i)<min){
                min = *(tab+i);
                index_min=i;
            }
        }
        memory2 = *(tab+k);
        *(tab+k)= min;
        *(tab+index_min)=memory2;
    }
    return 0;
}