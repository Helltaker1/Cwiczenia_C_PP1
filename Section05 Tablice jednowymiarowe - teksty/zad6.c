#include <stdio.h>
int main () {
    char napis1 [102];
    char napis2 [202]={0};
    int i;
    int x = 0;
    printf("Podaj napis\n");
    scanf("%s",napis1);
    for(i = 0; i<101;i++){
        if (i>=100){
            printf("Input is too long");
            return 2;
        }
        if(napis1[i]=='\0'){
            break;
        }
        if(!(napis1[i]>='0'&&napis1[i]<='9'||napis1[i]>='a'&&napis1[i] <= 'z')){
            printf("Incorrect input");
            return 1;
        }
        if(napis1[i]>='1'&&napis1[i]<='9'){
            if(napis1[i+1]>='a'&&napis1[i+1]<='z'){
                for(int m =1;m<(napis1[i]-'0');m++){
                    napis2[x] = napis1[i+1];
                    x++;
                }
            }
            else{
                printf("Incorrect input");
                return 1;
            }
            i++;
        }
        if(napis1[i]>='a'&&napis1[i]<='z'){
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