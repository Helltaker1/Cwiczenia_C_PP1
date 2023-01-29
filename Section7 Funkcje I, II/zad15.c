#include <stdio.h>
#include <math.h>
int horner(const char binary[]);
int main (){
    char binary_number[17];
    printf("Wprowadz iczbe binarna\n");
    scanf("%16[^\n]",binary_number);
    int k=0;
    while (binary_number[k]!='\0'){
        if(binary_number[k]!='1'&& binary_number[k]!='0'){
            printf("Incorrect input");
            return 1;
        }
        k++;
    }
    printf("%d", horner(binary_number));
    return 0;
}
int horner(const char binary[]){
    int k=0;
    int number=0;
    while (binary[k]!='\0'){
        if(binary[k]!='1'&& binary[k]!='0'){
            return -1;
        }
        k++;
    }
    k--;
    for (int g=k;g>=0;g--){
        if(binary[g]=='1'){
            number+= pow(2,k-g);
        }
    }
    return number;
}