#include <stdio.h>
int main () {
    char napis[11];
    int i;
    printf("Podaj imie\n");
    scanf("%10s",napis);
    for(i = 0; i<11;i++){
        if(napis[i]=='\0'){
            break;
        }
    }
    i--;
    if(napis[i]=='a'||napis[i]=='A'){
        printf("Imie zenskie");
    }
    else{
        printf("Imie meskie");
    }
    return 0;
}