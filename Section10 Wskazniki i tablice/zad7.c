#include <stdio.h>

#define SIZE 100

int sum(const float* tab, unsigned int size, float *result);
int avg(const float* tab, unsigned int size, float *result);
int read_vector_float(float *vec, int size, float stop_value);

int main() {
    float T[SIZE];
    int new_size;
    float suma,srednia;
    float *psuma=&suma;
    float *psrednia=&srednia;
    printf("Podaj ciag liczb\n");
    new_size= read_vector_float(T,SIZE,0.000);
    if(new_size==-2){
        printf("Incorrect input\n");
        return 1;
    }
    if(new_size==-1 || *T==0){
        printf("Not enough data available\n");
        return 3;
    }
    sum(T,new_size,psuma);
    avg(T,new_size,psrednia);
    printf("Suma: %.2f\n",suma);
    printf("Srednia: %.2f",srednia);
    return 0;
}

int sum(const float* tab, unsigned int size, float *result){
    if(size<=0){
        return 1;
    }
    if(tab==NULL){
        return 1;
    }
    if(result==NULL){
        return 1;
    }
    float sumyk=0;
    for(unsigned int k=0;k<size;k++){
        sumyk+=*(tab+k);
    }
    *result=sumyk;
    return 0;
}
int avg(const float* tab, unsigned int size, float *result){
    if(size<=0){
        return 1;
    }
    if(tab==NULL){
        return 1;
    }
    if(result==NULL){
        return 1;
    }
    float sum_x=0;
    for(unsigned int k=0;k<size;k++){
        sum_x+=*(tab+k);
    }
    *result=sum_x/size;
    return 0;
}
int read_vector_float(float *vec, int size, float stop_value){
    int k=0;
    if(size<=0){
        return -1;
    }
    if(vec==NULL){
        return -1;
    }
    if(scanf("%f",vec)!=1){
        while(getchar()!='\n');
        return -2;
    }
    if(*vec==stop_value){
        while(getchar()!='\n');
        return 0;
    }
    for(k=1;k<size;k++){
        if(scanf("%f",vec+k)!=1){
            while(getchar()!='\n');
            return -2;
        }
        if(*(vec+k)==stop_value){
            break;
        }
    }
    while(getchar()!='\n');
    return k;
}
}