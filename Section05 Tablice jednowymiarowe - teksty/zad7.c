#include <stdio.h>
int main () {
    char napis1 [103];
    char napis2 [202]={0};
    int i;
    int x = 0;
    printf("Podaj napis\n");
    scanf("%102[^\n]",napis1);
    for(i = 0; i<102;i++){
        if (i>100){
            printf("Input is too long");
            return 2;
        }
        if(napis1[i]=='\0'){
            break;
        }
        if(!(napis1[i]>='A'&&napis1[i]<='Z'||napis1[i]>='a'&&napis1[i] <= 'z'||napis1[i]==' ')){
            printf("Incorrect input");
            return 1;
        }
        if(napis1[i]>='A'&&napis1[i]<='Z'){
            for(int m =0;m<3;m++){
                napis2[x]=napis1[i];
                x++;
            }
            continue;
        }
        if(napis1[i]>='a'&&napis1[i]<='z'||napis1[i]==' '){
            napis2[x]=napis1[i];
            x++;
        }
    }
    if (x>200){
        printf("Output is too long");
        return 3;
    }
    for(int n = x-1;n>=0;n--){
        printf("%c",napis2[n]);
    }
    return 0;
}