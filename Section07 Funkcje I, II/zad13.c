#include <stdio.h>
int find_string(const char tab[], const char tab2[]);
int rfind_string(const char tab[], const char tab2[]);

int main (){
    char text [1001];
    char searched_text [1001];
    printf("Podaj tekst:\n");
    if(scanf("%1000[^\n]",text)==0){
        text[0]='\n';
    }
    while(getchar()!='\n');
    printf("Podaj szukany ciag znakow:\n");
    if(scanf("%1000[^\n]",searched_text)==0){
        searched_text[0]='\n';
    }
    printf("%d\n", find_string(text,searched_text));
    printf("%d", rfind_string(text,searched_text));
    return 0;
}

int find_string(const char tab[], const char tab2[]){
    int i=0;
    int memory_start;
    while (tab[i]!='\0'){
        if(tab[i]==tab2[0]){
            memory_start=i;
            int k=0;
            while (tab2[k]!='\0'){
                if(tab[i+k]!=tab2[k]){
                    break;
                }
                k++;
            }
            if(tab[i+k-1]==tab2[k-1]&&tab2[k]=='\0'){
                return memory_start;
            }
        }
        i++;
    }
    return -1;
}
int rfind_string(const char tab[], const char tab2[]){
    if(tab[0]=='\n'&&tab2[0]=='\n'){
        return 0;
    }
    int k =0;
    int i=0;
    int p=0;
    int n=0;
    while (tab2[k]!='\0'){
        k++;
    }
    while (tab[i]!='\0'){
        i++;
    }
    i--;
    k--;
    while (i>=0){
        if(tab[i]==tab2[k]){
            n=0;
            p =k;
            while (k>=0){
                if(tab[i-n]!=tab2[p]){
                    break;
                }
                n++;
                p--;
            }
            if(tab[i-n+1]==tab2[p+1]&&p<0){
                if(i-n+1<0){
                    return 0;
                }
                return i-n+1;
            }
        }
        i--;
    }
    return -1;
}