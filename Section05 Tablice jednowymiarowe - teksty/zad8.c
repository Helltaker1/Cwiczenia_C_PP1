#include <stdio.h>
#include <math.h>
int main () {
    char wejscie [1001];
    unsigned long long int wyjscie [1001]={0};
    int x = 0;
    int i;
    printf("Podaj wyrazenie:\n");
    scanf("%1000s",wejscie);
    for(i =0;i<1001;i++){
        if (wejscie [i] == '\0'){
            break;
        }
        if(!(wejscie[i]=='|' || wejscie[i]=='-' || wejscie[i] >= '0' && wejscie[i] <= '9')){
            printf("Incorrect input");
            return 1;
        }
        if (wejscie[i] >= '0' && wejscie[i]<='9'){
            if(wejscie[i+1]=='-'||wejscie[i+1]=='|'||wejscie[i+1]=='\0'){
                wyjscie[x]+=(wejscie[i]-'0');
            }
            else{
                //Ten for ma działać jak te ify niżej tylko dla i+(0<n <1000)
                for (int w = 0;w<1001;w++){
                    if(wejscie[i+w+1]=='-'||wejscie[i+w+1]=='|'||wejscie[i+w+1]=='\0'){
                        wyjscie [x]+= ((wejscie[i]-'0')* pow(10,w));
                        break;
                    }
                }
            }
        }
        if(wejscie[i]=='|'){
            x++;
        }
    }
    for (int m = 0;m<=x;m++){
        printf("%llu ",wyjscie[m]);
    }

    return 0;
}