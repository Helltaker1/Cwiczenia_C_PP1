#include <stdio.h>
#include "vector_utils.h"
#define SIZE 100

int find(const int* tab, int size, int to_find);

int main() {

    int wykonane=0;
    int tablica[SIZE];
    int *tab=tablica;
    int nowy_rozmiar=0;
    int szukany=0;
    printf("Podaj liczby\n");
    nowy_rozmiar= read_vector(tab,SIZE,0);
    if(nowy_rozmiar==0){
        printf("Not enough data available\n");
        return 3;
    }

    if(nowy_rozmiar<0){
        printf("Incorrect input\n");
        return 1;
    }
    printf("podaj element ktory chcesz znalezc:\n");
    if(scanf("%d",&szukany)!=1){
        printf("Incorrect input\n");
        return 1;
    }
    //for(;;){
    int znaleziony =find(tab, nowy_rozmiar, szukany);
    if(znaleziony!=-1 && znaleziony!=-2){
        wykonane=1;
        printf("%d ",znaleziony);
    } else if(wykonane==0){
        printf("Nothing to show");
        return 0;
    } else{
        //break;
    }
    //}
    znaleziony =find(NULL, nowy_rozmiar, szukany);
    if(znaleziony!=-1 && znaleziony!=-2){
        wykonane=1;
        printf("%d ",znaleziony);
    } else if(wykonane==0){
        printf("Nothing to show");
        return 0;
    } else{
        //break;
    }
    return 0;
}

int find(const int* tab, int size, int to_find) {
    static int poprzedni=0;
    int*x =tab;
    static int* ostatni=0;
    if(tab!=NULL){
        ostatni=x;
    }
    if(poprzedni==0 && tab==NULL){
        return -2;
    }
    if(poprzedni==size){
        return -2;
    }
    if(size<=0){
        return -1;
    }
    if(tab==NULL){
        for(int i=poprzedni;i<size;i++){
            if(to_find==*(ostatni+i)){
                poprzedni=i+1;
                ostatni+=+i;
                return i;
            }
        }
    }
    else{
        for(int i=poprzedni;i<size;i++){
            if(to_find==*(tab+i)){
                poprzedni=i+1;
                return i;
            }
        }
    }

    return -2;
}