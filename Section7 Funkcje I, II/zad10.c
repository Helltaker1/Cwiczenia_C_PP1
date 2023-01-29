#include <stdio.h>
#include <math.h>
float average(const int tab[], int size);
float stdDev(const int tab[], int size);
int main (){
    int tab_numbers [100]={0};
    int acount_numbers =0;
    printf("podaj liczby:\n");
    for (int k=0;k<100;k++){
        if(scanf("%d",&tab_numbers[k])!=1){
            printf("Incorrect input\n");
            return 1;
        }
        if(tab_numbers[k]==0){
            break;
        }
        acount_numbers++;
    }
    if (tab_numbers[0]==0){
        printf("not enough data available\n");
        return 2;
    }
    printf("%.2f\n", average(tab_numbers,acount_numbers));
    printf("%.2f\n", stdDev(tab_numbers,acount_numbers));
    return 0;
}
float average(const int tab[], int size){
    float sum=0;
    if(size<=0){
        return -1;
    }
    for (int i =0;i<size;i++){
        sum+=tab[i];
    }
    return sum/size;
}
float stdDev(const int tab[], int size) {
    float sum = 0;
    if(size<=0){
        return -1;
    }
    for (int i = 0; i < size; i++) {
        sum += tab[i];
    }
    float numerator = 0;
    for (int i = 0; i < size; i++) {
        numerator+= pow(tab[i]-sum / size,2);
    }
    return sqrt(numerator/size);
}