#include <stdio.h>
int main () {
    char napis[1001];
    int i;
    printf("podaj napis\n");
    fgets(napis, sizeof(napis), stdin);
    for(i = 0; i<1001;i++){
        if(napis[i]=='\0'){
            break;
        }
    }
    if (i!=1000){
        i--;
    }
    printf("%d",i);
}