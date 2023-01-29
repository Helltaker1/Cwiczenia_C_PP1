#include <stdio.h>
#define VECTOR_SIZE 150
int read_vector(int vec[], int size, int stop_value);
int ascending_input(const int vec[],int size,int k);
int binary_search(const int arr[], int l, int r, int x);

int main (){
    int vector[VECTOR_SIZE]={0};
    int searched_number;
    printf("Podaj wektor\n");
    int new_size=read_vector(vector,VECTOR_SIZE,0);
    if(new_size==-1){
        printf("Not enough data available");
        return 3;
    }
    if(new_size==-2){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj szukany wyraz\n");
    if(scanf("%d",&searched_number)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    if(ascending_input(vector,new_size,0)==-1){
        printf("Incorrect input data");
        return 2;
    }

    int x =binary_search(vector,0,new_size,searched_number);
    printf("%d", x);
    return 0;
}
int binary_search(const int arr[], int l, int r, int x){
    if(ascending_input(arr,r,0)==-1){
        //printf("Incorrect input data");
        return 0;
    }
    int z = (l+r)/2;
    if(arr[z]==x) {
        return z;
    }
    if(arr[z]<x && l<r){
        l=z+1;
        return binary_search(arr,l,r,x);
    }
    if(arr[z]>x && l<r){
        r=z-1;
        return binary_search(arr,l,r,x);
    }
    return -1;
}

int ascending_input(const int vec[],int size,int k){
    if(k<size-1){
        if(vec[k]>vec[k+1]){
            return -1;
        }
        k++;
        return ascending_input(vec,size,k);
    }
    return 0;
}

int read_vector(int vec[], int size, int stop_value){
    int k;
    if(size<=0){
        return -1;
    }
    for(k=0;k<size;k++){
        if(scanf("%d[^\n]",&vec[k])!=1){
            while(getchar()!='\n');
            return -2;
        }
        if(vec[0]==stop_value){
            return -1;
        }
        if(vec[k]==stop_value){
            break;
        }
    }
    while(getchar()!='\n');
    return k;
}