#include <stdio.h>
#define VECTOR_SIZE 50
int concat_begin(const int first[], int size, const int second[], int size2, int dest[], int size3);
int concat_end(const int first[], int size, const int second[], int size2, int dest[], int size3);
int concat_zip(const int first[], int size, const int second[], int size2, int dest[], int size3);
int read_vector(int vec[], int size, int stop_value);
void display_vector(const int vec[], int size);

int main (){
    int first_vector[VECTOR_SIZE]={0};
    int second_vector[VECTOR_SIZE]={0};
    int final_vector[VECTOR_SIZE]={0};
    //pierwszy wektor - pobierz
    printf("Podaj pierwszy wektor\n");
    int new_size1 = read_vector(first_vector,VECTOR_SIZE,0);
    while(getchar()!='\n');
    if(new_size1==-2){
        printf("Incorrect input");
        return 1;
    }
    if(new_size1==-1){
        printf("Not enough data available");
        return 2;
    }
    //drugi wektor - pobierz
    printf("Podaj drugi wektor\n");
    int new_size2 = read_vector(second_vector,VECTOR_SIZE,0);
    while(getchar()!='\n');
    if(new_size2==-2){
        printf("Incorrect input");
        return 1;
    }
    if(new_size2==-1){
        printf("Not enough data available");
        return 2;
    }
    //wyswietl pierwszy i drugi wektor
    display_vector(first_vector, new_size1);
    display_vector(second_vector, new_size2);
    //sprawdzenie wyjscia
    int new_size_final=new_size1+new_size2;
    if(concat_begin(first_vector,new_size1,second_vector,new_size2,final_vector,VECTOR_SIZE)==-2){
        if(concat_end(first_vector,new_size1,second_vector,new_size2,final_vector,VECTOR_SIZE)==-2){
            if(concat_zip(first_vector,new_size1,second_vector,new_size2,final_vector,VECTOR_SIZE)==-2){
                printf("Output buffer is too small\n");
                return 0;
            }
        }
    }
    //wektor1 + wektor2
    concat_begin(first_vector,new_size1,second_vector,new_size2,final_vector,VECTOR_SIZE);
    display_vector(final_vector,new_size_final);
    //wektor2+wektor 1
    concat_end(first_vector,new_size1,second_vector,new_size2,final_vector,VECTOR_SIZE);
    display_vector(final_vector,new_size_final);
    //na zmiane
    concat_zip(first_vector,new_size1,second_vector,new_size2,final_vector,VECTOR_SIZE);
    display_vector(final_vector,new_size_final);
    return 0;
}

int read_vector(int vec[], int size, int stop_value){
    int k;
    if(size<=0){
        return -1;
    }
    for(k=0;k<size;k++){
        if(scanf("%d[^\n]",&vec[k])!=1){
            return -2;
        }
        if(vec[0]==stop_value){
            return -1;
        }
        if(vec[k]==stop_value){
            break;
        }
    }
    return k;
}

void display_vector(const int vec[], int size){
    if(size<=0){
        return;
    }
    for(int k=0;k<size;k++){
        printf("%d ",vec[k]);
    }
    printf("\n");
    return;
}

int concat_begin(const int first[], int size, const int second[], int size2, int dest[], int size3){
    if(size<=0||size2<=0||size3<=0){
        return -1;
    }
    if(size+size2>size3){
        return -2;
    }
    for(int k=0;k<size;k++){
        dest[k]=first[k];
    }
    for(int k=size;k<size+size2;k++){
        dest[k]=second[k-size];
    }
    return size+size2;
}

int concat_end(const int first[], int size, const int second[], int size2, int dest[], int size3){
    if(size<=0||size2<=0||size3<=0){
        return -1;
    }
    if(size+size2>size3){
        return -2;
    }
    for(int k=0;k<size2;k++){
        dest[k]=second[k];
    }
    for(int k=size2;k<size+size2;k++){
        dest[k]=first[k-size2];
    }
    return size+size2;
}

int concat_zip(const int first[], int size, const int second[], int size2, int dest[], int size3){
    if(size<=0||size2<=0||size3<=0){
        return -1;
    }
    if(size+size2>size3){
        return -2;
    }
    int first_acount=0;
    int second_acount=0;
    dest[0]=first[first_acount];
    first_acount++;
    for(int k=1;k<size2+size;k++){
        if(k%2==0){
            if(first_acount<size){
                dest[k]=first[first_acount];
                first_acount++;
            }
            else{
                dest[k]=second[second_acount];
                second_acount++;
            }
        }else{
            if(second_acount<size2){
                dest[k]=second[second_acount];
                second_acount++;
            }else{
                dest[k]=first[first_acount];
                first_acount++;
            }
        }
    }
    return size+size2;
}