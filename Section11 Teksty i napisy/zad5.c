#include <stdio.h>
#include <string.h>
#define SIZE 100
int starts_with(const char* txt, const char* find);
int ends_with(const char* txt, const char* find);
void clearBuffer();
int main() {
    char tekst_glowny[SIZE+1];
    char szukany_fragment[SIZE+1];
    printf("Podaj tekst glowny\n");
    scanf("%100[^\n]",tekst_glowny);
    clearBuffer();
    printf("Podaj szukany fragment\n");
    scanf("%100[^\n]",szukany_fragment);
    clearBuffer();
    printf("%d\n",starts_with(tekst_glowny, szukany_fragment));
    printf("%d\n",ends_with(tekst_glowny, szukany_fragment));
    return 0;
}

int starts_with(const char* txt, const char* find){
    if(txt==NULL||find==NULL){
        return -1;
    }
    //int dlugosc_glownego_tekstu=strlen(txt);
    int dlugosc_szukanego_fragmentu=strlen(find);
//    if(dlugosc_szukanego_fragmentu>dlugosc_glownego_tekstu){
//        return -1;
//    }
    int porownanie=strncmp(txt,find,dlugosc_szukanego_fragmentu);
    if(porownanie==0){
        return 1;
    }
    return 0;
}
int ends_with(const char* txt, const char* find){
    if(txt==NULL||find==NULL){
        return -1;
    }
    int dlugosc_glownego_tekstu=strlen(txt);
    int dlugosc_szukanego_fragmentu=strlen(find);
//    if(dlugosc_szukanego_fragmentu>dlugosc_glownego_tekstu){
//        return -1;
//    }
    int porownanie=strncmp(txt+dlugosc_glownego_tekstu-dlugosc_szukanego_fragmentu,find,dlugosc_szukanego_fragmentu);
    if(porownanie==0){
        return 1;
    }
    return 0;
}

void clearBuffer(){
    if(getchar()!='\n'){
        clearBuffer();
    }
    return;
}